
/* ==== TQuickRace.vmt_01c @ 0048e9f8 ==== 
 * signature: undefined TQuickRace.vmt_01c(void)
 * body: 0048e9f8-0048eb20
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TQuickRace_vmt_01c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  code *pcStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 **ppuStack_34;
  char *pcStack_30;
  undefined4 *puStack_2c;
  undefined1 *puStack_28;
  char *pcStack_24;
  undefined4 *puStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcStack_1c = thunk_FUN_004036bc;
  puStack_20 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  pcStack_24 = (char *)0x48ea26;
  TRace_vmt_01c(param_1,param_2);
  pcStack_24 = "DOWNLOADCAR";
  puStack_28 = &stack0xffffffec;
  puStack_2c = (undefined4 *)0x48ea3a;
  (**(code **)(*param_1 + 0x18))(param_1,&puStack_18);
  puStack_2c = (undefined4 *)0x48ea48;
  (**(code **)*param_2)(param_2,puStack_18,"DOWNLOADSECTION");
  puStack_2c = (undefined4 *)0x7;
  pcStack_30 = (char *)0x48ea55;
  (**(code **)(*param_1 + 0x18))(param_1,&pcStack_1c);
  pcStack_30 = (char *)0x48ea64;
  iVar2 = (**(code **)(*param_2 + 8))(param_2,pcStack_1c,"DOWNLOADCHARIX");
  param_1[7] = iVar2;
  pcStack_30 = "locked!";
  ppuStack_34 = &puStack_20;
  uStack_38 = 0x48ea7e;
  (**(code **)(*param_1 + 0x18))(param_1,&pcStack_24);
  uStack_38 = 0x48ea8c;
  (**(code **)*param_2)(param_2,pcStack_24,"LOCKEDCHARTEXT");
  uStack_38 = 0x48ea9a;
  FUN_00403cb0(param_1 + 9,puStack_20);
  uStack_38 = 5;
  puStack_3c = (undefined1 *)0x48eaa7;
  (**(code **)(*param_1 + 0x18))(param_1,&puStack_28);
  puStack_3c = (undefined1 *)0x48eab6;
  iVar2 = (**(code **)(*param_2 + 8))(param_2,puStack_28,"LOCKEDCHARIX");
  param_1[10] = iVar2;
  puStack_3c = (undefined1 *)0x48ead6;
  FUN_00403f28((int *)&puStack_2c,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"L0_ANIM.INI");
  puStack_3c = (undefined1 *)0x48eae5;
  piVar1 = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',puStack_2c);
  pcStack_40 = thunk_FUN_004036bc;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  (**(code **)(*piVar1 + 8))(piVar1,unaff_ESI,"Count");
  *in_FS_OFFSET = 0;
  pcStack_40 = FUN_0048eb28;
  uStack_44 = 0x48eb20;
  FUN_00402f9c(piVar1);
  return;
}


