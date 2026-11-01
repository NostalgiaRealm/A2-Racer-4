
/* ==== FUN_00402fa8 @ 00402fa8 ==== 
 * signature: undefined __register FUN_00402fa8(int param_1, int * param_2)
 * body: 00402fa8-00402ffd
 */

/* WARNING: Removing unreachable block (ram,0x00402fdd) */
/* WARNING: Removing unreachable block (ram,0x00402fe3) */
/* WARNING: Removing unreachable block (ram,0x00402fea) */
/* WARNING: Removing unreachable block (ram,0x00402ff0) */
/* WARNING: Removing unreachable block (ram,0x00402ff6) */

void FUN_00402fa8(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_2 = param_1;
  uVar2 = *(uint *)(param_1 + -0x28);
  uVar1 = uVar2 >> 2;
  while( true ) {
    param_2 = param_2 + 1;
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) break;
    *param_2 = 0;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = 0;
    param_2 = (int *)((int)param_2 + 1);
  }
  for (; *(int **)(param_1 + -0x24) != (int *)0x0; param_1 = **(int **)(param_1 + -0x24)) {
  }
  return;
}


