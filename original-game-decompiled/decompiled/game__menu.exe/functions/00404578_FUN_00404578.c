
/* ==== FUN_00404578 @ 00404578 ==== 
 * signature: VARIANTARG * __register FUN_00404578(VARIANTARG * param_1, char * param_2, int param_3)
 * body: 00404578-0040465e
 */

/* WARNING: Type propagation algorithm not settling */

VARIANTARG * FUN_00404578(VARIANTARG *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  VARIANTARG *pVVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 != 0) {
    cVar1 = *param_2;
    uVar4 = (uint)(byte)param_2[1];
    if (cVar1 == '\n') {
      if (param_3 < 2) {
        FUN_00403c5c((int *)param_1);
      }
      else {
        FUN_00403c80((int *)param_1,param_3);
      }
    }
    else if (cVar1 == '\v') {
      if (param_3 < 2) {
        FUN_004042b4((undefined4 *)param_1);
      }
      else {
        FUN_004042cc((undefined4 *)param_1,param_3);
      }
    }
    else {
      pVVar3 = param_1;
      if (cVar1 == '\f') {
        do {
          FUN_00405038(pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = pVVar3 + 1;
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else if (cVar1 == '\r') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_00404578(pVVar3,(char *)**(undefined4 **)(param_2 + uVar4 + 10),
                       *(int *)(param_2 + uVar4 + 6));
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0e') {
        do {
          iVar6 = *(int *)(param_2 + uVar4 + 2);
          FUN_0040454c((int)pVVar3,(int)param_2);
          iVar5 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + iVar6);
          param_3 = iVar5;
        } while (iVar5 != 0 && bVar2);
      }
      else if (cVar1 == '\x0f') {
        do {
          FUN_00405860((int *)pVVar3);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + 4);
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
      else {
        if (cVar1 != '\x11') {
          pVVar3 = (VARIANTARG *)FUN_00402808(CONCAT31((int3)((uint)param_1 >> 8),2));
          return pVVar3;
        }
        do {
          FUN_0040522c((int *)pVVar3,(int)param_2);
          iVar6 = param_3 + -1;
          bVar2 = 0 < param_3;
          pVVar3 = (VARIANTARG *)((int)&pVVar3->n1 + 4);
          param_3 = iVar6;
        } while (iVar6 != 0 && bVar2);
      }
    }
  }
  return param_1;
}


