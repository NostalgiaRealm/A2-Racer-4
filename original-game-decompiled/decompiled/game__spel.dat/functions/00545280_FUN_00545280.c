
/* ==== FUN_00545280 @ 00545280 ==== 
 * signature: int __fastcall FUN_00545280(double * param_1)
 * body: 00545280-00545423
 */

int __fastcall FUN_00545280(double *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  
  do {
    *(undefined4 *)((int)param_1 + 0xac) = *(undefined4 *)((int)param_1 + 0x54);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 10)) {
      do {
        iVar1 = *(int *)((int)param_1 + 0x3c);
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar1 + -8 + iVar4 * 8) = 0;
        *(undefined4 *)(iVar1 + -4 + iVar4 * 8) = 0;
      } while (iVar4 < *(int *)(param_1 + 10));
    }
    FUN_00544710(param_1);
    iVar4 = FUN_00544f50((int)param_1);
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0xf) = 0;
      FUN_00546510((int)(param_1 + 0x10));
      iVar4 = 0;
      if (0 < *(int *)((int)param_1 + 0x54)) {
        do {
          iVar2 = *(int *)((int)param_1 + 0x9c);
          iVar3 = *(int *)((int)param_1 + 0x3c);
          iVar5 = *(int *)(*(int *)((int)param_1 + 0x44) + iVar4 * 4);
          iVar1 = iVar4 * 8;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar3 + iVar5 * 8) = *(undefined4 *)(iVar2 + iVar1);
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = *(undefined4 *)(iVar2 + -4 + iVar4 * 8);
        } while (iVar4 < *(int *)((int)param_1 + 0x54));
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xf) = 2;
      FUN_00544fe0(param_1);
      FUN_00544710(param_1);
      *(int *)(param_1 + 0x17) = *(int *)((int)param_1 + 0x54);
      *(uint *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0x54) + 1U & 0xfffffffe;
      local_10 = 0;
      if (0 < *(int *)((int)param_1 + 0x54)) {
        do {
          iVar4 = *(int *)((int)param_1 + 0x24);
          iVar1 = *(int *)((int)param_1 + 0xc4);
          iVar2 = *(int *)(*(int *)((int)param_1 + 0x44) + local_10 * 4);
          *(undefined4 *)(iVar1 + local_10 * 8) = *(undefined4 *)(iVar4 + iVar2 * 8);
          *(undefined4 *)(iVar1 + 4 + local_10 * 8) = *(undefined4 *)(iVar4 + 4 + iVar2 * 8);
          iVar4 = 0;
          if (0 < *(int *)((int)param_1 + 0x54)) {
            do {
              iVar1 = *(int *)(param_1 + 4);
              iVar5 = *(int *)(*(int *)((int)param_1 + 0x44) + iVar4 * 4) +
                      *(int *)(param_1 + 10) * iVar2;
              iVar3 = *(int *)(param_1 + 0x18);
              iVar6 = *(int *)((int)param_1 + 0xbc) * local_10 + iVar4;
              iVar4 = iVar4 + 1;
              *(undefined4 *)(iVar3 + iVar6 * 8) = *(undefined4 *)(iVar1 + iVar5 * 8);
              *(undefined4 *)(iVar3 + 4 + iVar6 * 8) = *(undefined4 *)(iVar1 + 4 + iVar5 * 8);
            } while (iVar4 < *(int *)((int)param_1 + 0x54));
          }
          local_10 = local_10 + 1;
        } while (local_10 < *(int *)((int)param_1 + 0x54));
      }
      iVar4 = FUN_00543ae0(param_1 + 0x16);
      if (iVar4 != 1) {
        return iVar4;
      }
      iVar4 = 0;
      if (0 < *(int *)((int)param_1 + 0x54)) {
        do {
          iVar2 = *(int *)(param_1 + 0x19);
          iVar3 = *(int *)((int)param_1 + 0x3c);
          iVar5 = *(int *)(*(int *)((int)param_1 + 0x44) + iVar4 * 4);
          iVar1 = iVar4 * 8;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar3 + iVar5 * 8) = *(undefined4 *)(iVar2 + iVar1);
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = *(undefined4 *)(iVar2 + -4 + iVar4 * 8);
        } while (iVar4 < *(int *)((int)param_1 + 0x54));
      }
    }
    FUN_00545050((int)param_1);
    iVar4 = FUN_00545460(param_1);
    if (iVar4 < 1) {
      return 1;
    }
  } while( true );
}


