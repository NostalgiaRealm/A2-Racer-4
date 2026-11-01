
/* ==== FUN_004150e0 @ 004150e0 ==== 
 * signature: undefined __cdecl FUN_004150e0(int param_1)
 * body: 004150e0-004151ed
 */

void __cdecl FUN_004150e0(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = (&DAT_005d1ba8)[param_1 * 0xe];
  iVar2 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
  if (*(int *)(&DAT_005d1bbc + param_1 * 0x38) < *(int *)(&DAT_00709f1c + iVar2 * 0x340)) {
    FUN_00414640(param_1);
    iVar3 = iVar3 * 0xf0;
    pfVar1 = (float *)(iVar3 + 0xc4 + DAT_00715e50);
    if (DAT_005d1b3c <= *(float *)(iVar3 + 0xc4 + DAT_00715e50)) {
      *pfVar1 = DAT_005d1b3c;
    }
    else {
      fVar4 = FUN_004a6800(0x7128b0);
      *pfVar1 = (float)(fVar4 * (float10)5.0 + (float10)*pfVar1);
    }
    if (*(float *)(iVar3 + 0xc4 + DAT_00715e50) < 5.0) {
      *(undefined4 *)(iVar3 + 0xc4 + DAT_00715e50) = 0x40a00000;
      return;
    }
  }
  else {
    iVar3 = iVar3 * 0xf0;
    *(undefined4 *)(iVar3 + 0xc4 + DAT_00715e50) = 0;
    *(undefined4 *)(iVar3 + 0xbc + DAT_00715e50) = 0;
    *(undefined4 *)(iVar3 + 0xcc + DAT_00715e50) = 0;
    *(undefined4 *)(iVar3 + 0x5c + DAT_00715e50) = 0;
    (&DAT_0070a240)[(&DAT_005d1bc0)[param_1 * 0xe] * 0xd0] = 0;
  }
  return;
}


