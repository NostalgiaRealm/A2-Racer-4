
/* ==== FUN_004d4c30 @ 004d4c30 ==== 
 * signature: uint __fastcall FUN_004d4c30(int * param_1)
 * body: 004d4c30-004d4c4f
 */

uint __fastcall FUN_004d4c30(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[0xb])) {
    return (uint)*pbVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x004d4c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x10))();
  return uVar2;
}


