# include<linux/module.h>
# include<linux/init.h>
#include<linux/kernel.h>

static int _init marvellous_init (void)
{
    printk( __kernel_INFO "Marvellous module gets inserted : Jay Gasnesh...\n") ;
    return 0 ; 
}
static void _exit marvellous_exit(void)
{
    printk( KERN_INFO "Marvellous module gets removed\n") ;
}

module_init (marvellous_init)

module_exit (marvellous_exit)

MODULE_LICENSE("GPL") ;

MODULE_AUTHOR("Marvellous Infosystems\n") ;

MODULE_DESCRIPTION("Demo Kernel Module\n") ;
