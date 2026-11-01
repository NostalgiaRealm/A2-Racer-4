
/* ==== FUN_0043cf88 @ 0043cf88 ==== 
 * signature: undefined4 __register FUN_0043cf88(int param_1)
 * body: 0043cf88-0043cf9d
 */

undefined4 FUN_0043cf88(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80000005;
  if (*(char *)(param_1 + 0x217) == '\x02') {
    uVar1 = 0x8000000c;
  }
  return uVar1;
}


