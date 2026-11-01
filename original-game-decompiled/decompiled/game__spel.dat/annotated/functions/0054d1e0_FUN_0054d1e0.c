
/* ==== FUN_0054d1e0 @ 0054d1e0 ==== 
 * signature: undefined __fastcall FUN_0054d1e0(int param_1)
 * body: 0054d1e0-0054d224
 */

void __fastcall FUN_0054d1e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_10 [4];
  
  puVar1 = (undefined4 *)FUN_0054ec38(local_10);
  *(undefined4 *)(param_1 + 8) = *puVar1;
  *(undefined4 *)(param_1 + 0xc) = puVar1[1];
  *(undefined4 *)(param_1 + 0x10) = puVar1[2];
  *(undefined4 *)(param_1 + 0x14) = puVar1[3];
  if (DAT_0074db00 == 0) {
    DAT_0074db00 = *(int *)(param_1 + 0x10);
    FUN_005584e0(0x4d4ae0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


