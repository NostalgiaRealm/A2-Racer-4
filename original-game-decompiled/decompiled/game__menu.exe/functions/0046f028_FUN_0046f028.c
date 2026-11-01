
/* ==== FUN_0046f028 @ 0046f028 ==== 
 * signature: undefined FUN_0046f028(void)
 * body: 0046f028-0046f037
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0046f028(int param_1,VARIANTARG *param_2)

{
  char cVar1;
  undefined1 uVar2;
  BSTR pOVar3;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int aiStack_c [3];
  
  cVar1 = *(char *)(unaff_ESI + 0x101aa874);
  uVar2 = (undefined1)((short)param_1 / (short)cVar1);
  *(undefined4 *)((int)aiStack_c + param_1 + 8) = unaff_EBX;
  *(int *)((int)aiStack_c + param_1 + 4) = unaff_ESI;
  *(undefined4 *)((int)aiStack_c + param_1) = 0x46f045;
  FUN_004049ec(param_2);
  *(undefined4 *)((int)aiStack_c + param_1) = 0x46f04c;
  pOVar3 = FUN_00404950((LPCSTR)(CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                                          CONCAT11((char)((short)param_1 %
                                                                         (short)cVar1),uVar2)) >> 8)
                                          ,uVar2) | 0xab));
  *(BSTR *)((int)&param_2->n1 + 8) = pOVar3;
  (param_2->n1).n2.vt = 8;
  return;
}


