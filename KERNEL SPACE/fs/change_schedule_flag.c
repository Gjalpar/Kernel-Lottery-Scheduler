#include <linux/change_schedule_flag.h>
#include <linux/sched.h>
#include <asm/current.h>
#include <linux/kernel.h>
#include <asm/uaccess.h>


extern int schedule_flag = 0;


asmlinkage int sys_change_schedule_flag(int flag){
	if(flag == 1){
	schedule_flag = flag;
	printk("Schedule changed to lottery  mode  successfully\n");
	} else if(flag == 0){
		schedule_flag = flag;
		printk("Schedule changed to default mode successfully\n");
		} else{
			printk("Schedule changing failed\n");
			}	
			return schedule_flag;

}

