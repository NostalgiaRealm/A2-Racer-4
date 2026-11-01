
/* ==== FUN_00447938 @ 00447938 ==== 
 * signature: undefined4 __register FUN_00447938(int param_1)
 * body: 00447938-0044794d
 */

undefined4 FUN_00447938(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80000005;
  if (*(char *)(param_1 + 0x217) == '\x02') {
    uVar1 = 0x8000000c;
  }
  return uVar1;
}


