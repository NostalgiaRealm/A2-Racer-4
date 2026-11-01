
/* ==== FUN_00487b80 @ 00487b80 ==== 
 * signature: undefined FUN_00487b80(void)
 * body: 00487b80-00487b9a
 */

uint FUN_00487b80(int param_1)

{
  uint uVar1;
  
  if ((*(uint *)(param_1 + 4) | 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    if (0xff < uVar1) {
      uVar1 = thunk_FUN_00402808(uVar1);
      return uVar1;
    }
  }
  return uVar1;
}


