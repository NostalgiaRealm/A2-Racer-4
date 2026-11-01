
/* ==== TfrmDifficulty.FormShow @ 0049cf00 ==== 
 * signature: undefined TfrmDifficulty.FormShow(void)
 * body: 0049cf00-0049d08b
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDifficulty_FormShow(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_118 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_11c = &UNK_0049d08c;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar2 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,2);
  TBaseFormOneWay_FormShow((int)param_1);
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x02') {
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[199],
                 (undefined4 *)"headtour");
  }
  else {
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[199],
                 (undefined4 *)"headquic");
  }
  cVar1 = *(char *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8);
  if (cVar1 == '\0') {
    (**(code **)(*(int *)param_1[0xc1] + 0xbc))((int *)param_1[0xc1],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)"diffic00");
  }
  else if (cVar1 == '\x01') {
    (**(code **)(*(int *)param_1[0xc2] + 0xbc))((int *)param_1[0xc2],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)&UNK_0049d104);
  }
  else if (cVar1 == '\x02') {
    (**(code **)(*(int *)param_1[0xc3] + 0xbc))((int *)param_1[0xc3],1);
    FUN_00489c28(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
                 (undefined4 *)&UNK_0049d118);
  }
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&iStack_c,2);
  return;
}


