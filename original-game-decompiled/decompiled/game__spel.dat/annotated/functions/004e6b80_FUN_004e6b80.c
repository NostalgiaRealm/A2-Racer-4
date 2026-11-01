
/* ==== FUN_004e6b80 @ 004e6b80 ==== 
 * signature: undefined __thiscall FUN_004e6b80(void * this, undefined4 param_1)
 * body: 004e6b80-004e6c64
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004e6c65-004e6c6f
 */

void __thiscall FUN_004e6b80(void *this,char *param_1)

{
  void *this_00;
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00571d28;
  pvStack_c = ExceptionList;
  uVar3 = 0xffffffff;
  local_4 = 0;
  pcVar6 = &DAT_00712694;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  this_00 = (void *)((int)this + 0x10);
  ExceptionList = &pvStack_c;
  if (0xfffffffd < uVar3) {
    ExceptionList = &pvStack_c;
    FUN_0054b1b4();
  }
  iVar2 = *(int *)((int)this + 0x14);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004028f0(this_00,'\x01');
      goto LAB_004e6c3d;
    }
    if ((0x1f < *(uint *)((int)this + 0x1c)) || (*(uint *)((int)this + 0x1c) < uVar3)) {
      FUN_004028f0(this_00,'\x01');
      goto LAB_004e6c0f;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004028f0(this_00,'\0');
      goto LAB_004e6c3d;
    }
LAB_004e6c0f:
    FUN_00402b20(uVar3);
  }
  puVar5 = (undefined4 *)&DAT_00712694;
  puVar7 = *(undefined4 **)((int)this + 0x14);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(uint *)((int)this + 0x18) = uVar3;
  *(undefined1 *)(*(int *)((int)this + 0x14) + uVar3) = 0;
LAB_004e6c3d:
  FUN_004e62b0(this,param_1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_1,&DAT_00586d80);
}


