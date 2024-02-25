ENTRY(Reset_Handler)

MEMORY
{
    FLASH(rx):ORIGIN =0X08000000,LENGTH =1024K
    SRAM(rwx):ORIGIN =0X20000000,LENGTH =128K
}

__max_heap_size = 0x400;
__max_stack_size = 0x200;/*a symbol declaration, not variable*/

SECTIONS
{
    .text :
    {
        *(.isr_vector)
        *(.text)
        *(.rodata)
        . = ALIGN(4);
        _etext = .;/*store the updated location counter value to a symbol*/
    }>FLASH

    .data :
    {
        _sdata = .;
        start_of_data = 0x20000000;/*assign a value to a symbol*/
        *(.data)
        . = ALIGN(4);
        _edata = .;
    }>SRAM AT>FLASH

    .bss :
    {
        _sbss = .;
        *(.bss)
        . = ALIGN(4);
        _ebss = .;
    }>SRAM
}