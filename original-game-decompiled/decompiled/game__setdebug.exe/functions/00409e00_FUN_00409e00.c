
/* ==== FUN_00409e00 @ 00409e00 ==== 
 * signature: undefined1 __register FUN_00409e00(int param_1, int * param_2, double * param_3)
 * body: 00409e00-00409fdb
 */

undefined1 FUN_00409e00(int param_1,int *param_2,double *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  char local_14 [4];
  
  iVar5 = -1;
  cVar1 = FUN_004098c8(param_1,param_2,DAT_00447504);
  if ((cVar1 == '\0') && (cVar1 = FUN_004098c8(param_1,param_2,&DAT_00409fe4), cVar1 == '\0')) {
    cVar1 = FUN_004098c8(param_1,param_2,DAT_00447508);
    if ((cVar1 != '\0') || (cVar1 = FUN_004098c8(param_1,param_2,&DAT_00409ff0), cVar1 != '\0')) {
      iVar5 = 0xc;
    }
  }
  else {
    iVar5 = 0;
  }
  if (-1 < iVar5) {
    FUN_00409810(param_1,param_2);
  }
  bVar2 = FUN_00409834(param_1,param_2,&local_1c,local_14);
  if (!bVar2) {
    return 0;
  }
  local_1a = 0;
  uVar4 = FUN_00409954(param_1,param_2,DAT_00447500);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_00409834(param_1,param_2,&local_1a,local_14), !bVar2)) {
    return 0;
  }
  local_18 = 0;
  uVar4 = FUN_00409954(param_1,param_2,DAT_00447500);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_00409834(param_1,param_2,&local_18,local_14), !bVar2)) {
    return 0;
  }
  local_16 = 0;
  uVar4 = FUN_00409954(param_1,param_2,DAT_004474f3);
  if (((char)uVar4 != '\0') && (bVar2 = FUN_00409834(param_1,param_2,&local_16,local_14), !bVar2)) {
    return 0;
  }
  if (iVar5 < 0) {
    cVar1 = FUN_004098c8(param_1,param_2,DAT_00447504);
    if ((cVar1 == '\0') && (cVar1 = FUN_004098c8(param_1,param_2,&DAT_00409fe4), cVar1 == '\0')) {
      cVar1 = FUN_004098c8(param_1,param_2,DAT_00447508);
      if ((cVar1 != '\0') || (cVar1 = FUN_004098c8(param_1,param_2,&DAT_00409ff0), cVar1 != '\0')) {
        iVar5 = 0xc;
      }
    }
    else {
      iVar5 = 0;
    }
  }
  if (-1 < iVar5) {
    if (local_1c == 0) {
      return 0;
    }
    if (0xc < local_1c) {
      return 0;
    }
    if (local_1c == 0xc) {
      local_1c = 0;
    }
    local_1c = local_1c + (short)iVar5;
  }
  FUN_00409810(param_1,param_2);
  uVar3 = FUN_004088c4(local_1c,local_1a,local_18,param_3,local_16);
  return uVar3;
}


