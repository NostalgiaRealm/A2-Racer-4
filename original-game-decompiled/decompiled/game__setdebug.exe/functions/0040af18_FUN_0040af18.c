
/* ==== FUN_0040af18 @ 0040af18 ==== 
 * signature: undefined FUN_0040af18(void)
 * body: 0040af18-0040afd2
 */

void FUN_0040af18(int *param_1)

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
  pcStack_20 = thunk_FUN_00403434;
  pcStack_24 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_24;
  piStack_8 = param_1;
  uVar1 = FUN_0040acb8(param_1);
  uVar1 = uVar1 & 0xff;
  if (7 < uVar1 - 3) {
    if (uVar1 == 0xb) {
      in_stack_ffffffd4 = 0x40af71;
      piVar2 = (int *)FUN_0040ad4c();
      goto LAB_0040afa6;
    }
    if (9 < uVar1 - 0xc) {
      iStack_10 = *piStack_8;
      uStack_c = 0;
      piVar2 = &iStack_10;
      in_stack_ffffffd4 = 0;
      FUN_00405298((undefined4 *)PTR_PTR_00446a80,(int *)&pbStack_14);
      piVar2 = (int *)FUN_0040a974((int)&DAT_004070f4,'\x01',pbStack_14,in_stack_ffffffd4,piVar2);
      goto LAB_0040afa6;
    }
  }
  piVar2 = FUN_0040a938(*(int **)(&DAT_0044621c + uVar1 * 8),'\x01',
                        *(undefined4 **)(&DAT_00446220 + uVar1 * 8));
LAB_0040afa6:
  uVar3 = FUN_00402e8c(piVar2,(int)&DAT_0040709c);
  if ((char)uVar3 != '\0') {
    piVar2[3] = (int)piStack_8;
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  pcStack_24 = FUN_0040afda;
  FUN_004039b8((int *)&pbStack_14);
  return;
}


