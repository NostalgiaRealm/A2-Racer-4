
/* ==== FUN_00409070 @ 00409070 ==== 
 * signature: undefined __cdecl FUN_00409070(int param_1)
 * body: 00409070-0040915c
 */

void __cdecl FUN_00409070(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0;
  iVar1 = iVar2 + DAT_00715e50;
  fVar3 = FUN_004a6800(0x7128b0);
  *(float *)(iVar1 + 0xc4) =
       (float)((float10)*(float *)(iVar1 + 0xc4) -
              fVar3 * (float10)*(float *)(iVar1 + 0xc4) * (float10)5.0);
  iVar1 = iVar2 + DAT_00715e50;
  fVar3 = FUN_004a6800(0x7128b0);
  *(float *)(iVar1 + 0xbc) =
       (float)((float10)*(float *)(iVar1 + 0xbc) -
              fVar3 * (float10)*(float *)(iVar1 + 0xbc) * (float10)5.0);
  iVar1 = iVar2 + DAT_00715e50;
  fVar3 = FUN_004a6800(0x7128b0);
  *(float *)(iVar1 + 0xcc) =
       (float)((float10)*(float *)(iVar1 + 0xcc) -
              fVar3 * (float10)*(float *)(iVar1 + 0xcc) * (float10)5.0);
  iVar1 = FUN_00407d20(*(int *)(iVar2 + 0x34 + DAT_00715e50),
                       *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
  if (iVar1 < -DAT_006fb8b0) {
    FUN_0040da60(param_1);
    *(undefined4 *)(iVar2 + 0x5c + DAT_00715e50) = 0;
  }
  return;
}


