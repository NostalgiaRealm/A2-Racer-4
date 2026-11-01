
/* ==== switchD_00451450::caseD_3 @ 00451542 ==== 
 * signature: undefined4 __stdcall caseD_3(void)
 * body: 00451542-0045162b
 */

undefined4 switchD_00451450::caseD_3(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar3;
  
  if (0.0 <= *(float *)(unaff_EDI + 0xb0)) {
    fVar3 = FUN_004a67f0(0x7128b0);
    if ((float10)*(float *)(unaff_ESI + 0xb0 + DAT_00715e50) <=
        fVar3 - (float10)*(float *)(unaff_EDI + 0xb4)) {
      *(undefined4 *)(unaff_ESI + 0x54 + DAT_00715e50) = 1;
      *(undefined4 *)(unaff_ESI + 0x2c + DAT_00715e50) = 0;
    }
  }
  iVar1 = unaff_ESI + DAT_00715e50;
  if (*(float *)(unaff_ESI + 0xe0 + DAT_00715e50) != 0.0) {
    fVar3 = FUN_004a67f0(0x7128b0);
    if ((float10)*(float *)(unaff_ESI + 0xb8 + DAT_00715e50) <=
        fVar3 - (float10)*(float *)(iVar1 + 0xb4)) {
      uVar2 = FUN_004a7bd0(unaff_ESI + DAT_00715e50);
      FUN_00478230(unaff_EBX,uVar2);
      *(undefined4 *)(unaff_ESI + 0xe0 + DAT_00715e50) = 0;
    }
  }
  FUN_004b5770(DAT_0073b0d0 + *(int *)(unaff_ESI + 0x24 + DAT_00715e50) * 0xa9);
  return 1;
}


