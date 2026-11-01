
/* ==== FUN_0040bc00 @ 0040bc00 ==== 
 * signature: undefined FUN_0040bc00(void)
 * body: 0040bc00-0040bcba
 */

void FUN_0040bc00(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  code *pcStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  byte *pbStack_14;
  int iStack_10;
  undefined1 uStack_c;
  int *piStack_8;
  
  puStack_1c = &stack0xfffffffc;
  pbStack_14 = (byte *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  pcStack_24 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_24;
  piStack_8 = param_1;
  uVar1 = FUN_0040b9a0(param_1);
  uVar1 = uVar1 & 0xff;
  if (7 < uVar1 - 3) {
    if (uVar1 == 0xb) {
      in_stack_ffffffd4 = 0x40bc59;
      piVar2 = (int *)FUN_0040ba34();
      goto LAB_0040bc8e;
    }
    if (9 < uVar1 - 0xc) {
      iStack_10 = *piStack_8;
      uStack_c = 0;
      piVar2 = &iStack_10;
      in_stack_ffffffd4 = 0;
      FUN_00405808((undefined4 *)PTR_PTR_004ab610,(int *)&pbStack_14);
      piVar2 = (int *)FUN_0040b614((int)&DAT_00407848,'\x01',pbStack_14,in_stack_ffffffd4,piVar2);
      goto LAB_0040bc8e;
    }
  }
  piVar2 = FUN_0040b5d8(*(int **)(&DAT_004aa230 + uVar1 * 8),'\x01',
                        *(undefined4 **)(&DAT_004aa234 + uVar1 * 8));
LAB_0040bc8e:
  uVar3 = FUN_00403114(piVar2,(int)&DAT_004077f0);
  if ((char)uVar3 != '\0') {
    piVar2[3] = (int)piStack_8;
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  pcStack_24 = FUN_0040bcc2;
  FUN_00403c5c((int *)&pbStack_14);
  return;
}


