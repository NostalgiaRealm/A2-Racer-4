
/* ==== FUN_004ab140 @ 004ab140 ==== 
 * signature: undefined __thiscall FUN_004ab140(void * this, int param_1)
 * body: 004ab140-004ab1ff
 */

void __thiscall FUN_004ab140(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_004c3fa0((byte *)s_clear_object___d_from_list__005b0310);
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_004c3fa0((byte *)s_search_for_object_005b02fc);
    iVar2 = 0;
    piVar4 = (int *)((int)this + 0x28);
    do {
      FUN_004c3fa0(&DAT_005b02f8);
      iVar3 = iVar2;
      if (*piVar4 == param_1) break;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
      iVar3 = -1;
    } while (iVar2 < 10);
    FUN_004c3fa0(&DAT_005ae60c);
    if (iVar3 != -1) {
      FUN_004c3fa0((byte *)s_found_object_in_list__index__d__005b02d4);
      if (iVar3 < 9) {
        puVar1 = (undefined4 *)((int)this + iVar3 * 4 + 0x28);
        iVar2 = 9 - iVar3;
        iVar3 = iVar3 + iVar2;
        do {
          *puVar1 = puVar1[1];
          puVar1 = puVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_004c3fa0((byte *)s_clearing_last_in_list__d__005b02b8);
      *(undefined4 *)((int)this + iVar3 * 4 + 0x28) = 0xffffffff;
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    }
  }
  return;
}


