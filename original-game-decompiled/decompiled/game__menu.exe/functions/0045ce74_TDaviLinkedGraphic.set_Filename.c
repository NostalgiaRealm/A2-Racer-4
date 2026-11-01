
/* ==== TDaviLinkedGraphic.set_Filename @ 0045ce74 ==== 
 * signature: undefined __register TDaviLinkedGraphic.set_Filename(int * param_1, uint * param_2)
 * body: 0045ce74-0045cfd7
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviLinkedGraphic_set_Filename(int *param_1,uint *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  undefined1 uVar4;
  int in_stack_fffffec0;
  int iStack_134;
  code *pcStack_130;
  undefined1 *puStack_12c;
  byte *local_120;
  uint *local_11c;
  uint *local_118;
  undefined1 local_114;
  int local_110;
  byte local_10c [256];
  int local_c;
  int local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_11c = (uint *)0x0;
  local_120 = (byte *)0x0;
  local_8 = 0;
  local_c = 0;
  local_110 = 0;
  pcStack_130 = thunk_FUN_004036bc;
  iStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_134;
  uVar4 = param_2 == (uint *)0x0;
  puVar1 = &stack0xfffffffc;
  if (!(bool)uVar4) {
    uVar3 = FUN_004087a4((undefined *)param_2);
    uVar4 = 0;
    puVar1 = puStack_12c;
    if (((char)uVar3 == '\0') && (uVar4 = (char)param_1[1] == '\0', !(bool)uVar4)) {
      FUN_00402ee4(*param_1,local_10c);
      FUN_00403e80(&local_c,local_10c);
      local_114 = 0xb;
      uVar4 = 1;
      local_118 = param_2;
      FUN_00409254((byte *)" File \"%s\" not found",&local_118,0,&local_110);
      in_stack_fffffec0 = local_110;
      FUN_00403f9c(&local_8,3);
      FUN_00403c40(local_8);
      puVar1 = puStack_12c;
    }
  }
  puStack_12c = puVar1;
  FUN_00403fec(param_2,(uint *)param_1[2]);
  if ((!(bool)uVar4) && ((char)param_1[1] == '\x01')) {
    FUN_00403cb0(param_1 + 2,param_2);
    FUN_00408a68((undefined *)param_1[2],(int *)&local_120);
    FUN_0040822c(local_120,(int *)&local_11c);
    cVar2 = FUN_0045cbd0(param_1,local_11c);
    FUN_0045cca0(param_1,cVar2);
    if (param_1[2] != 0) {
      (**(code **)(*(int *)param_1[3] + 0x48))((int *)param_1[3],param_1[2]);
    }
    (**(code **)(*param_1 + 0xc))(param_1,param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  *in_FS_OFFSET = in_stack_fffffec0;
  FUN_00403c80((int *)&local_120,2);
  FUN_00403c5c(&local_110);
  FUN_00403c80(&local_c,2);
  return;
}


