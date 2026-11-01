
/* ==== FUN_004cf4f0 @ 004cf4f0 ==== 
 * signature: undefined4 * __thiscall FUN_004cf4f0(void * this, char * param_1)
 * body: 004cf4f0-004cf642
 */

undefined4 * __thiscall FUN_004cf4f0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *this_00;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f8bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00576a88;
  *(undefined4 *)((int)this + 8) = 3;
  this_00 = operator_new(0x10);
  local_4 = 0;
  if (this_00 == (undefined1 *)0x0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    ExceptionList = local_c;
    return this;
  }
  *this_00 = param_1._0_1_;
  uVar3 = 0xffffffff;
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined4 *)(this_00 + 8) = 0;
  *(undefined4 *)(this_00 + 0xc) = 0;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)(this_00 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(this_00,'\x01');
      *(undefined1 **)((int)this + 0x10) = this_00;
      ExceptionList = local_c;
      return this;
    }
    if ((*(uint *)(this_00 + 0xc) < 0x20) && (uVar3 <= *(uint *)(this_00 + 0xc))) goto LAB_004cf5ea;
    FUN_004028f0(this_00,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this_00,'\0');
    *(undefined1 **)((int)this + 0x10) = this_00;
    ExceptionList = local_c;
    return this;
  }
  FUN_00402b20(uVar3);
LAB_004cf5ea:
  pcVar5 = *(char **)(this_00 + 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = *param_1;
    param_1 = param_1 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(uint *)(this_00 + 8) = uVar3;
  *(undefined1 *)(*(int *)(this_00 + 4) + uVar3) = 0;
  *(undefined1 **)((int)this + 0x10) = this_00;
  ExceptionList = local_c;
  return this;
}


