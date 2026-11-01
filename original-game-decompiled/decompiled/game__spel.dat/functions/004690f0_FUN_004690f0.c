
/* ==== FUN_004690f0 @ 004690f0 ==== 
 * signature: undefined __thiscall FUN_004690f0(void * this, char * param_1)
 * body: 004690f0-0046919e
 */

void __thiscall FUN_004690f0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  uVar3 = 0xffffffff;
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
  iVar2 = *(int *)((int)this + 0x24);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0((void *)((int)this + 0x20),'\x01');
      return;
    }
    if ((*(uint *)((int)this + 0x2c) < 0x20) && (uVar3 <= *(uint *)((int)this + 0x2c)))
    goto LAB_00469177;
    FUN_004028f0((void *)((int)this + 0x20),'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    return;
  }
  FUN_00402b20(uVar3);
LAB_00469177:
  pcVar5 = *(char **)((int)this + 0x24);
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
  *(uint *)((int)this + 0x28) = uVar3;
  *(undefined1 *)(*(int *)((int)this + 0x24) + uVar3) = 0;
  return;
}


