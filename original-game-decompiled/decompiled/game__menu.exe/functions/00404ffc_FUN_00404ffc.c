
/* ==== FUN_00404ffc @ 00404ffc ==== 
 * signature: undefined __register FUN_00404ffc(VARIANTARG * param_1, undefined4 param_2)
 * body: 00404f98-00404fed;00404ffc-00405036
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404ffc(VARIANTARG *param_1,undefined4 param_2)

{
  LPCSTR pCVar1;
  HRESULT HVar2;
  BSTR pOVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  code *pcStackY_28;
  code *pcStackY_24;
  undefined4 local_14 [2];
  
  if ((((VARIANTARG *)param_2)->n1).n2.vt == 0x101) {
    puVar5 = local_14;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *(undefined4 *)&((VARIANTARG *)param_2)->n1;
      param_2 = (VARIANTARG *)((int)&((VARIANTARG *)param_2)->n1 + 4);
      puVar5 = puVar5 + 1;
    }
    pcStackY_24 = (code *)0x404fb7;
    FUN_00405040((VARIANT *)local_14);
    pcStackY_28 = thunk_FUN_004036bc;
    uStackY_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_2c;
    pcStackY_24 = (code *)&stack0xfffffffc;
    (*DAT_004ac3ec)(local_14);
    FUN_00404ffc(param_1,local_14);
    *in_FS_OFFSET = uStackY_2c;
    pcStackY_24 = FUN_00404ff5;
    pcStackY_28 = (code *)0x404fed;
    FUN_00405038((VARIANTARG *)local_14);
    return;
  }
  if ((((VARIANTARG *)param_2)->n1).n2.vt == 0x100) {
    if (7 < (param_1->n1).n2.vt) {
      FUN_004049ec(param_1);
    }
    (param_1->n1).n2.vt = 8;
    pOVar3 = (BSTR)((int)&param_1->n1 + 8);
    pCVar1 = *(LPCSTR *)((int)&((VARIANTARG *)param_2)->n1 + 8);
    pOVar3[0] = L'\0';
    pOVar3[1] = L'\0';
    FUN_004043f8(pOVar3,pCVar1);
    return;
  }
  if (param_1 != (VARIANTARG *)param_2) {
    if (7 < (param_1->n1).n2.vt) {
      if ((param_1->n1).n2.vt == 0x100) {
        FUN_00403c5c((int *)((int)&param_1->n1 + 8));
      }
      else if ((param_1->n1).n2.vt == 0x101) {
        (*DAT_004ac3e8)();
      }
      else {
        local_14[1] = 0x404a54;
        VariantClear(param_1);
      }
    }
    if ((((VARIANTARG *)param_2)->n1).n2.vt < 8) {
      *(undefined4 *)&param_1->n1 = *(undefined4 *)&((VARIANTARG *)param_2)->n1;
      *(undefined4 *)((int)&param_1->n1 + 8) =
           *(undefined4 *)((int)&((VARIANTARG *)param_2)->n1 + 8);
      *(undefined4 *)((int)&param_1->n1 + 0xc) =
           *(undefined4 *)((int)&((VARIANTARG *)param_2)->n1 + 0xc);
      return;
    }
    if ((((VARIANTARG *)param_2)->n1).n2.vt == 0x100) {
      iVar4 = *(int *)((int)&((VARIANTARG *)param_2)->n1 + 8);
      if ((iVar4 != 0) && (-1 < *(int *)(iVar4 + -8))) {
        LOCK();
        *(int *)(iVar4 + -8) = *(int *)(iVar4 + -8) + 1;
        UNLOCK();
      }
      (param_1->n1).n2.vt = 0x100;
      *(int *)((int)&param_1->n1 + 8) = iVar4;
      return;
    }
    if ((((VARIANTARG *)param_2)->n1).n2.vt == 0x101) {
      FUN_00404a6e((undefined4 *)param_1,(undefined4 *)param_2);
                    /* WARNING: Could not recover jumptable at 0x00404a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*_DAT_004ac3f0)(param_1);
      return;
    }
    (param_1->n1).n2.vt = 0;
    HVar2 = VariantCopyInd(param_1,(VARIANTARG *)param_2);
    if (HVar2 != 0) {
      FUN_00402808(CONCAT31((int3)((uint)HVar2 >> 8),0x10));
      return;
    }
  }
  return;
}


