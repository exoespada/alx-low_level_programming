#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_elf_header_info(Elf64_Ehdr *header);

int main(int argc, char *argv[])
{
    Elf64_Ehdr *header;
    int o_file, r_file;

    o_file = open(argv[1], O_RDONLY);
    if (o_file == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (!header)
    {
        close(o_file);
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    r_file = read(o_file, header, sizeof(Elf64_Ehdr));
    if (r_file == -1)
    {
        free(header);
        close(o_file);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
        exit(98);
    }

    check_elf(header->e_ident);
    printf("ELF Header:\n");
    print_elf_header_info(header);

    free(header);
    close(o_file);
    return (0);
}

void check_elf(unsigned char *e_ident)
{
    if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        exit(98);
    }
}

void print_elf_header_info(Elf64_Ehdr *header)
{}

