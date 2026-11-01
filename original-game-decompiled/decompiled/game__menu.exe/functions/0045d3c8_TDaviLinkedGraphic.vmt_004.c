
/* ==== TDaviLinkedGraphic.vmt_004 @ 0045d3c8 ==== 
 * signature: undefined __register TDaviLinkedGraphic.vmt_004(int param_1, int * param_2)
 * body: 0045d3c8-0045d480
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviLinkedGraphic_vmt_004(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10 = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_1;
  local_8 = param_2;
  TPersistent_vmt_004();
  bVar1 = FUN_0045d374();
  (**(code **)(*local_8 + 4))(local_8,"GraphicName",bVar1,FUN_0045d2f4,local_c,FUN_0045d1ec,local_c)
  ;
  pcVar4 = FUN_0045d0d8;
  pcVar2 = FUN_0045d16c;
  iVar3 = local_c;
  iVar5 = local_c;
  FUN_00402ee4(**(int **)(local_c + 0xc),local_110);
  FUN_00403e80(&local_10,local_110);
  (**(code **)(*local_8 + 8))
            (local_8,local_10,*(char *)(local_c + 4) == '\0' && bVar1,pcVar2,iVar3,pcVar4,iVar5);
  *in_FS_OFFSET = pcVar2;
  FUN_00403c5c(&local_10);
  return;
}


