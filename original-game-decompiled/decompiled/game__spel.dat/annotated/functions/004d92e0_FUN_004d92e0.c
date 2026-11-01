
/* ==== FUN_004d92e0 @ 004d92e0 ==== 
 * signature: undefined1 * __thiscall FUN_004d92e0(void * this, undefined1 * param_1)
 * body: 004d92e0-004d93d8
 */

undefined1 * __thiscall FUN_004d92e0(void *this,undefined1 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005704b8;
  local_c = ExceptionList;
  iVar6 = *(int *)((int)this + 8) + -4;
  ExceptionList = &local_c;
  *(int *)((int)this + 8) = iVar6;
  pcVar2 = *(char **)(*(int *)((int)this + 4) + iVar6);
  uVar4 = 0xffffffff;
  local_1c[0] = param_1._0_1_;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  pcVar7 = pcVar2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uVar3 = FUN_00402a00(local_1c,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar7 = pcVar2;
    pcVar8 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_18[uVar4] = '\0';
    local_14 = uVar4;
  }
  local_4 = 0;
  FUN_00559d4e(pcVar2);
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_004093c0(param_1,local_1c,0,0xffffffff);
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}


