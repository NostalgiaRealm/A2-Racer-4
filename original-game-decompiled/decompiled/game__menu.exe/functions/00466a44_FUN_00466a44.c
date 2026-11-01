
/* ==== FUN_00466a44 @ 00466a44 ==== 
 * signature: undefined __register FUN_00466a44(int param_1, undefined4 param_2, undefined * param_3, LPRECT param_4, int * param_5)
 * body: 00466a44-00466b38
 */

void FUN_00466a44(int param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  LONG *pLVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  LPCSTR lpchText;
  HDC hdc;
  int iVar6;
  LPRECT ptVar7;
  undefined4 uVar8;
  
  uVar3 = FUN_00403114(param_5,(int)&PTR_TPersistent_vmt_000_00466ed8);
  if ((char)uVar3 == '\0') {
    FUN_00403c40("Assertion failure");
  }
  *(int **)(param_1 + 0x128) = param_5;
  piVar4 = (int *)FUN_00467d48(*(int *)(param_1 + 0x128),5);
  cVar2 = (**(code **)(*piVar4 + 0x1c))();
  if (cVar2 == '\0') {
    uVar8 = 0;
    ptVar7 = param_4;
    piVar4 = (int *)FUN_00467d48(*(int *)(param_1 + 0x128),5);
    uVar3 = (**(code **)(*piVar4 + 0x20))();
    FUN_0040f7e8(0,0,uVar3,&ptVar7->left,uVar8);
  }
  else {
    FUN_0040f7e8(0,0,param_2,&param_4->left,0);
  }
  TCanvas_set_Font(*(int *)(param_1 + 0x120));
  uVar5 = FUN_004306a8(param_1);
  uVar5 = uVar5 | 0xc10;
  if ((int)uVar5 < 0) {
    uVar5 = thunk_FUN_00402808(uVar5);
  }
  iVar6 = -1;
  ptVar7 = param_4;
  lpchText = FUN_004040a0(param_3);
  hdc = (HDC)FUN_004194d8(*(int **)(param_1 + 0x120));
  uVar5 = DrawTextA(hdc,lpchText,iVar6,ptVar7,uVar5);
  pLVar1 = &param_4->right;
  iVar6 = *pLVar1;
  *pLVar1 = *pLVar1 + 6;
  if (SCARRY4(iVar6,6)) {
    uVar5 = thunk_FUN_00402808(uVar5);
  }
  pLVar1 = &param_4->bottom;
  iVar6 = *pLVar1;
  *pLVar1 = *pLVar1 + 2;
  if (SCARRY4(iVar6,2)) {
    thunk_FUN_00402808(uVar5);
  }
  return;
}


