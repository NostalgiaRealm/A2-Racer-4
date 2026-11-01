
/* ==== FUN_00404710 @ 00404710 ==== 
 * signature: undefined __register FUN_00404710(VARIANT * param_1, VARIANTARG * param_2)
 * body: 004046c4-004046ca;00404710-0040474d;0040475f-004047a8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404710(VARIANT *param_1,VARIANTARG *param_2)

{
  int iVar1;
  HRESULT HVar2;
  
  if (param_1 != param_2) {
    if (7 < (param_1->n1).n2.vt) {
      if ((param_1->n1).n2.vt == 0x100) {
        FUN_004039b8((int *)((int)&param_1->n1 + 8));
      }
      else if ((param_1->n1).n2.vt == 0x101) {
        (*DAT_004473e0)();
      }
      else {
        VariantClear(param_1);
      }
    }
    if ((param_2->n1).n2.vt < 8) {
      *(undefined4 *)&param_1->n1 = *(undefined4 *)&param_2->n1;
      *(undefined4 *)((int)&param_1->n1 + 8) = *(undefined4 *)((int)&param_2->n1 + 8);
      *(undefined4 *)((int)&param_1->n1 + 0xc) = *(undefined4 *)((int)&param_2->n1 + 0xc);
      return;
    }
    if ((param_2->n1).n2.vt == 0x100) {
      iVar1 = *(int *)((int)&param_2->n1 + 8);
      if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + -8))) {
        LOCK();
        *(int *)(iVar1 + -8) = *(int *)(iVar1 + -8) + 1;
        UNLOCK();
      }
      (param_1->n1).n2.vt = 0x100;
      *(int *)((int)&param_1->n1 + 8) = iVar1;
      return;
    }
    if ((param_2->n1).n2.vt == 0x101) {
      FUN_0040474e((undefined4 *)param_1,(undefined4 *)param_2);
                    /* WARNING: Could not recover jumptable at 0x00404774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_004473e8)(param_1);
      return;
    }
    (param_1->n1).n2.vt = 0;
    HVar2 = VariantCopyInd(param_1,param_2);
    if (HVar2 != 0) {
      FUN_00402744(CONCAT31((int3)((uint)HVar2 >> 8),0x10));
      return;
    }
  }
  return;
}


