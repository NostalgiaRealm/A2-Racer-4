
/* ==== FUN_004935b0 @ 004935b0 ==== 
 * signature: undefined __fastcall FUN_004935b0(void * param_1)
 * body: 004935b0-0049363f
 */

void __fastcall FUN_004935b0(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_c [3];
  
  puVar2 = (undefined4 *)FUN_00493500(param_1,local_c,DAT_006fbaa4);
  FUN_004928e0(*(void **)((int)param_1 + 0x18),*puVar2,puVar2[1],puVar2[2]);
  iVar4 = 0;
  if (0 < DAT_005d2ab0) {
    piVar3 = &DAT_005973c8;
    do {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x20) + 4);
      puVar2 = (undefined4 *)FUN_00493500(param_1,local_c,*piVar3);
      FUN_004928e0(*(void **)(iVar1 + iVar4 * 4),*puVar2,puVar2[1],puVar2[2]);
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x16;
    } while (iVar4 < DAT_005d2ab0);
  }
  return;
}


