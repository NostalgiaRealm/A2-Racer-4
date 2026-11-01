
/* ==== FUN_004900f0 @ 004900f0 ==== 
 * signature: undefined1 * __thiscall FUN_004900f0(void * this, char * param_1, undefined1 * param_2)
 * body: 004900f0-004901ac
 */

undefined1 * __thiscall FUN_004900f0(void *this,char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  *(undefined1 *)this = *param_2;
  uVar3 = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
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
  iVar2 = *(int *)((int)this + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (uVar3 <= *(uint *)((int)this + 0xc)))
    goto LAB_00490183;
    FUN_004028f0(this,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_004028f0(this,'\0');
    return this;
  }
  FUN_00402b20(uVar3);
LAB_00490183:
  pcVar5 = *(char **)((int)this + 4);
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
  *(uint *)((int)this + 8) = uVar3;
  *(undefined1 *)(*(int *)((int)this + 4) + uVar3) = 0;
  return this;
}


