
/* ==== TControl.dyn_fff0 @ 0043028c ==== 
 * signature: undefined TControl.dyn_fff0(void)
 * body: 0043028c-00430370
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TControl_dyn_fff0(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  uint *puStack_c;
  int iStack_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (uint *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = FUN_00403114(param_2,(int)&PTR_TCustomAction_vmt_000_0043943c);
  if ((char)uVar2 == '\0') goto LAB_00430356;
  if (param_3 == '\0') {
LAB_004302ea:
    TGroupBox_set_Caption((int)param_1,(uint *)param_2[0x15]);
  }
  else {
    TGroupBox_get_Caption((int)param_1,&iStack_8);
    uVar4 = iStack_8 == 0;
    if ((bool)uVar4) goto LAB_004302ea;
    TGroupBox_get_Caption((int)param_1,(int *)&puStack_c);
    FUN_00403fec(puStack_c,(uint *)param_1[2]);
    if ((bool)uVar4) goto LAB_004302ea;
  }
  if (param_3 == '\0') {
LAB_00430303:
    (**(code **)(*param_1 + 0x5c))(param_1,*(undefined1 *)((int)param_2 + 0x59));
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    uVar2 = extraout_ECX;
    uVar3 = extraout_EDX;
    if (cVar1 == '\x01') goto LAB_00430303;
  }
  if ((param_3 == '\0') || (param_1[0x1c] == 0)) {
    FUN_00403cb0(param_1 + 0x1c,(undefined4 *)param_2[0x18]);
    uVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
  }
  if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x47) == '\x01')) {
    TGroupBox_set_Visible
              (param_1,CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)((int)param_2 + 0x6a)),uVar2
              );
  }
  if ((param_3 == '\0') || (*(short *)((int)param_1 + 0x10a) == 0)) {
    param_1[0x42] = param_2[0xc];
    param_1[0x43] = param_2[0xd];
  }
LAB_00430356:
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_00430378;
  pcStack_20 = (code *)0x430370;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


