
/* ==== TOleControl.vmt_0bc @ 0047181c ==== 
 * signature: undefined TOleControl.vmt_0bc(void)
 * body: 0047181c-004718bb;004718c3-0047191e;00471926-00471983;0047198b-004719e0;004719e8-004719f1;00471a08-00471a1f
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleControl_vmt_0bc(void)

{
  short sVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_44;
  code *pcStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  _union_2683 _Stack_14;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  puStack_30 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  _Stack_14._12_4_ = 0;
  _Stack_14._8_4_ = 0;
  _Stack_14.decVal.Hi32 = 0;
  _Stack_14._0_4_ = 0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pcStack_34 = thunk_FUN_00403534;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (in_stack_00000008 == -0x202) {
    if (*(char *)((int)in_stack_00000004 + 0x233) == '\0') {
      *(undefined1 *)((int)in_stack_00000004 + 0x233) = 1;
      pcStack_40 = thunk_FUN_004036bc;
      uStack_44 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_44;
      sVar1 = TAgent_get_Connected(in_stack_00000004,0xfffffdfe);
      (**(code **)(*in_stack_00000004 + 0x5c))(in_stack_00000004,sVar1 != 0);
      *in_FS_OFFSET = uStack_44;
      *(undefined1 *)((int)in_stack_00000004 + 0x233) = 0;
      return;
    }
  }
  else if (in_stack_00000008 == -0x201) {
    if (*(char *)((int)in_stack_00000004 + 0x232) == '\0') {
      *(undefined1 *)((int)in_stack_00000004 + 0x232) = 1;
      pcStack_40 = thunk_FUN_004036bc;
      uStack_44 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_44;
      puStack_3c = &stack0xfffffffc;
      puStack_30 = &stack0xfffffffc;
      pcStack_24 = (code *)&stack0xfffffffc;
      iVar2 = FUN_0046fcc0(in_stack_00000004,0xfffffdff);
      TFont_set_Color((int *)in_stack_00000004[0x16],iVar2,extraout_ECX);
      *in_FS_OFFSET = uStack_44;
      *(undefined1 *)((int)in_stack_00000004 + 0x232) = 0;
      return;
    }
  }
  else if (in_stack_00000008 == -0x200) {
    if (*(char *)((int)in_stack_00000004 + 0x232) == '\0') {
      *(undefined1 *)((int)in_stack_00000004 + 0x232) = 1;
      pcStack_40 = thunk_FUN_004036bc;
      uStack_44 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_44;
      puStack_3c = &stack0xfffffffc;
      puStack_30 = &stack0xfffffffc;
      pcStack_24 = (code *)&stack0xfffffffc;
      FUN_0046feb4(in_stack_00000004,0xfffffe00,(VARIANTARG *)&_Stack_14.n2);
      FUN_0046efbc((short *)&_Stack_14,in_stack_00000004[0x16]);
      *in_FS_OFFSET = uStack_44;
      *(undefined1 *)((int)in_stack_00000004 + 0x232) = 0;
      return;
    }
  }
  else if ((in_stack_00000008 == -0x1f5) && (*(char *)((int)in_stack_00000004 + 0x231) == '\0')) {
    *(undefined1 *)((int)in_stack_00000004 + 0x231) = 1;
    pcStack_40 = thunk_FUN_004036bc;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    puStack_3c = &stack0xfffffffc;
    puStack_30 = &stack0xfffffffc;
    pcStack_24 = (code *)&stack0xfffffffc;
    iVar2 = FUN_0046fcc0(in_stack_00000004,0xfffffe0b);
    TGroupBox_set_Color((int)in_stack_00000004,iVar2);
    *in_FS_OFFSET = uStack_44;
    *(undefined1 *)((int)in_stack_00000004 + 0x231) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_38;
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_00471a27;
  pcStack_28 = (code *)0x471a1f;
  puStack_30 = &stack0xfffffffc;
  FUN_00405038((VARIANTARG *)&_Stack_14.n2);
  return;
}


