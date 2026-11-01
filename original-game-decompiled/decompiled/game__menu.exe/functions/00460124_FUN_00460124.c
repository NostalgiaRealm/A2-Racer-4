
/* ==== FUN_00460124 @ 00460124 ==== 
 * signature: undefined __register FUN_00460124(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00460124-004602ba
 */

void FUN_00460124(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 uStack_60;
  code *pcStack_5c;
  code *pcStack_58;
  int local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  pcStack_58 = (code *)&stack0xfffffffc;
  local_30 = 0;
  local_2c = (undefined4 *)0x0;
  local_20 = 0;
  local_1c = (undefined4 *)0x0;
  local_8 = 0;
  pcStack_5c = thunk_FUN_004036bc;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  cVar1 = FUN_00457d74(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_004087a4((undefined *)param_1[1]);
    if ((char)uVar2 == '\0') {
      local_28 = param_1[1];
      local_24 = 0xb;
      FUN_00409254((byte *)"\"%s\", does not exist",&local_28,0,&local_20);
      iVar5 = local_20;
      uVar3 = FUN_0045f46c();
      FUN_0045fe38(uVar3,iVar5);
      local_28 = param_1[1];
      local_24 = 0xb;
      FUN_00409254((byte *)"\"%s\", does not exist",&local_28,0,(int *)&local_2c);
      piVar4 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_2c);
      FUN_004036f4(piVar4);
    }
    else {
      local_18 = param_1[1];
      local_14 = 0xb;
      local_c = 0xb;
      local_10 = param_2;
      FUN_00409254((byte *)"\"%s\", Section [%s] does not exist!!!",&local_18,1,&local_8);
      iVar5 = local_8;
      uVar3 = FUN_0045f46c();
      FUN_0045fe38(uVar3,iVar5);
      local_18 = param_1[1];
      local_14 = 0xb;
      local_c = 0xb;
      local_10 = param_2;
      FUN_00409254((byte *)"\"%s\", Section [%s] does not exist",&local_18,1,(int *)&local_1c);
      piVar4 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',local_1c);
      FUN_004036f4(piVar4);
    }
  }
  cVar1 = FUN_004583c4(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    local_48 = param_1[1];
    local_44 = 0xb;
    local_3c = 0xb;
    local_34 = 0xb;
    local_40 = param_2;
    local_38 = param_3;
    FUN_00409254((byte *)"\"%s\", [%s], Identifier \"%s\" does not exist",&local_48,2,&local_30);
    iVar5 = local_30;
    uVar3 = FUN_0045f46c();
    FUN_0045fe38(uVar3,iVar5);
  }
  *in_FS_OFFSET = uStack_60;
  pcStack_58 = FUN_004602c2;
  pcStack_5c = (code *)0x4602a5;
  FUN_00403c80(&local_30,2);
  pcStack_5c = (code *)0x4602b2;
  FUN_00403c80(&local_20,2);
  pcStack_5c = (code *)0x4602ba;
  FUN_00403c5c(&local_8);
  return;
}


