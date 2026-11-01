
/* ==== FUN_004c1ae0 @ 004c1ae0 ==== 
 * signature: void * __thiscall FUN_004c1ae0(void * this, char * param_1)
 * body: 004c1ae0-004c1b0d;004c1b11-004c1b2c;004c1b39-004c1b9c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c1b0e-004c1b10 004c1b2d-004c1b38
 */

void * __thiscall FUN_004c1ae0(void *this,char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  if ((int)uVar3 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____assignment_to_a_nul_siz_005b2fdc);
  }
  if (*(int *)((int)this + 4) == 0) {
    puVar2 = operator_new(uVar3);
  }
  else {
    if (*(int *)((int)this + 4) != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____unknown_string_status_005b2fb8);
    }
    FUN_0054b339(*(LPVOID *)this);
    puVar2 = operator_new(uVar3);
  }
  *(undefined4 **)this = puVar2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = *(char **)this;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(uint *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 4) = 1;
  return this;
}


