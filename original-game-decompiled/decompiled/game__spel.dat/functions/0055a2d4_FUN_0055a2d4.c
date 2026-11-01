
/* ==== FUN_0055a2d4 @ 0055a2d4 ==== 
 * signature: undefined __cdecl FUN_0055a2d4(int * param_1)
 * body: 0055a2d4-0055a327
 */

void __cdecl FUN_0055a2d4(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = param_1[4];
  FUN_0055a5de(param_1);
  param_1[3] = param_1[3] & 0xffffffcf;
  if (uVar1 == 0xffffffff) {
    puVar2 = &DAT_005c8ac8;
  }
  else {
    puVar2 = (undefined *)((&DAT_007500a0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 8);
  }
  puVar2[4] = puVar2[4] & 0xfd;
  if ((param_1[3] & 0x80U) != 0) {
    param_1[3] = param_1[3] & 0xfffffffc;
  }
  FUN_00562b76(uVar1,0,0);
  return;
}


