#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static void callToAction(void) {
    printk(KERN_INFO "Откликайся скорее, Linux разработчик!\n");
}

static int __init hello_init(void) {
    printk(KERN_INFO "Hello, Linux kernel module loaded!\n");
    callToAction();
    return 0;
}

static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye, Linux kernel module unloaded!\n");
    callToAction();
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Recruiter");
MODULE_DESCRIPTION("Example Linux kernel module for vacancy repo.");
