
/* ==== FUN_00441fa0 @ 00441fa0 ==== 
 * signature: undefined __fastcall FUN_00441fa0(void * param_1)
 * body: 00441fa0-00441fea;00441fee-0044207d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00441feb-00441fed
 */

void __fastcall FUN_00441fa0(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [3];
  
  piVar1 = *(int **)(DAT_0073b1b0 + 4 + *(int *)((int)param_1 + 4) * 0x48);
  iVar2 = FUN_004c48f0(piVar1);
  if (*(char *)((int)param_1 + 0xac) != '\0') {
    if (0 < DAT_00715258) {
      iVar5 = 0;
      iVar4 = DAT_00715258;
      do {
        iVar7 = iVar5 + 0x34 + DAT_00715f00;
        local_18 = *(float *)(iVar5 + 0x34 + DAT_00715f00);
        local_14 = *(undefined4 *)(iVar7 + 4);
        local_10 = *(undefined4 *)(iVar7 + 8);
        FUN_00441d30(param_1,local_c,&local_18);
        iVar7 = iVar2;
        iVar8 = local_2c;
        lVar6 = __ftol();
        iVar3 = (int)lVar6;
        lVar6 = __ftol();
        FUN_00441f30(param_1,(int)lVar6,iVar3,iVar7,iVar8);
        iVar5 = iVar5 + 0x994;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_004c4a20(piVar1,iVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Road_bounding_box_not_in_0059d238);
}


