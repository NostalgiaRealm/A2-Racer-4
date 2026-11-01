
/* ==== FUN_00471de0 @ 00471de0 ==== 
 * signature: undefined __fastcall FUN_00471de0(void * param_1)
 * body: 00471de0-00471e55
 */

void __fastcall FUN_00471de0(void *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if (((*(int *)((int)param_1 + 4) == 0) ||
      (cVar1 = *(char *)(*(int *)((int)param_1 + 4) + -1), cVar1 == '\0')) || (cVar1 == -1))
  goto LAB_00471e48;
  uVar2 = *(uint *)((int)param_1 + 8);
  if (0xfffffffd < uVar2) {
    FUN_0054b1b4();
  }
  iVar3 = *(int *)((int)param_1 + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        FUN_004029e0(param_1,0);
      }
      goto LAB_00471e48;
    }
    if (uVar2 <= *(uint *)((int)param_1 + 0xc)) goto LAB_00471e48;
  }
  else if (uVar2 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)((int)param_1 + 8) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    goto LAB_00471e48;
  }
  FUN_00402b20(uVar2);
LAB_00471e48:
  if (*(int *)((int)param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)((int)param_1 + 4) + -1) = 0xff;
  }
  return;
}


