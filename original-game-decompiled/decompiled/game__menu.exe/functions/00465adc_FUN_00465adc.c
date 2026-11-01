
/* ==== FUN_00465adc @ 00465adc ==== 
 * signature: undefined __register FUN_00465adc(int * param_1, LONG * param_2, int param_3, uint param_4)
 * body: 00465adc-00465c34
 */

/* WARNING: Removing unreachable block (ram,0x00465bcb) */
/* WARNING: Removing unreachable block (ram,0x00465b4b) */
/* WARNING: Removing unreachable block (ram,0x00465b0b) */
/* WARNING: Removing unreachable block (ram,0x00465b8b) */
/* WARNING: Removing unreachable block (ram,0x00465c0b) */

void FUN_00465adc(int *param_1,LONG *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  RECT *pRVar3;
  bool bVar4;
  RECT local_18;
  LONG *local_8;
  
  pRVar3 = &local_18;
  local_8 = param_2;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    pRVar3->left = *param_2;
    param_2 = param_2 + 1;
    pRVar3 = (RECT *)&pRVar3->top;
  }
  TBrush_set_Color((int *)param_1[5],
                   *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab044)[(param_4 & 0xff) * 5] * 4))
  ;
  uVar1 = FUN_004190b8(param_1,&local_18);
  bVar4 = SBORROW4(local_18.right,1);
  local_18.right = local_18.right + -1;
  if (bVar4) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  bVar4 = SBORROW4(local_18.bottom,1);
  local_18.bottom = local_18.bottom + -1;
  if (bVar4) {
    thunk_FUN_00402808(uVar1);
  }
  TBrush_set_Color((int *)param_1[5],
                   *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab045)[(param_4 & 0xff) * 5] * 4))
  ;
  uVar1 = FUN_004190b8(param_1,&local_18);
  bVar4 = SCARRY4(local_18.left,1);
  local_18.left = local_18.left + 1;
  if (bVar4) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  bVar4 = SCARRY4(local_18.top,1);
  local_18.top = local_18.top + 1;
  if (bVar4) {
    thunk_FUN_00402808(uVar1);
  }
  TBrush_set_Color((int *)param_1[5],
                   *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab046)[(param_4 & 0xff) * 5] * 4))
  ;
  uVar1 = FUN_004190b8(param_1,&local_18);
  bVar4 = SBORROW4(local_18.right,1);
  local_18.right = local_18.right + -1;
  if (bVar4) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  bVar4 = SBORROW4(local_18.bottom,1);
  local_18.bottom = local_18.bottom + -1;
  if (bVar4) {
    thunk_FUN_00402808(uVar1);
  }
  TBrush_set_Color((int *)param_1[5],
                   *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab047)[(param_4 & 0xff) * 5] * 4))
  ;
  uVar1 = FUN_004190b8(param_1,&local_18);
  bVar4 = SCARRY4(local_18.left,1);
  local_18.left = local_18.left + 1;
  if (bVar4) {
    uVar1 = thunk_FUN_00402808(uVar1);
  }
  bVar4 = SCARRY4(local_18.top,1);
  local_18.top = local_18.top + 1;
  if (bVar4) {
    thunk_FUN_00402808(uVar1);
  }
  TBrush_set_Color((int *)param_1[5],
                   *(undefined4 *)(param_3 + (uint)(byte)(&DAT_004ab048)[(param_4 & 0xff) * 5] * 4))
  ;
  FUN_0041907c(param_1,&local_18);
  return;
}


