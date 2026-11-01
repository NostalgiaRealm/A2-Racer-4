
/* ==== FUN_0044269d @ 0044269d ==== 
 * signature: undefined __fastcall FUN_0044269d(void * param_1)
 * body: 0044269d-0044273f;00442743-004427ac;004427b0-004427f2
 */

void __fastcall FUN_0044269d(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (*(int *)((int)param_1 + 0xe4) != 0) {
    iVar2 = *(int *)((int)param_1 + 4);
    iVar4 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar4 + 0x60) = iVar2;
    uVar1 = *(undefined4 *)(DAT_0073b1b0 + iVar2 * 0x48);
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x48) = uVar1;
    if (*(int *)(iVar4 + 0x5c) == 1) {
      *(undefined4 *)(iVar4 + 0x58) = 0;
      (**(code **)(**(int **)(iVar4 + 0x54) + 0xc))(*(int **)(iVar4 + 0x54),iVar4);
    }
    iVar2 = *(int *)((int)param_1 + 4);
    if (DAT_0073b4ec != iVar2) {
      DAT_0073b4ec = iVar2;
      iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                        (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar2 * 0x48));
      if (iVar2 != 0) {
        FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
      }
    }
    if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,1);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x13,6);
      (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x14,5);
    }
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,6,3,(int)param_1 + 8,4,1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d__DramPrimitive_error_0059d29c);
    }
    FUN_00442650(param_1);
    iVar4 = 0;
    iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 200))();
    if (0 < iVar2) {
      do {
        FUN_00442a20(*(int *)(*(int *)((int)param_1 + 0xcc) + 4) + iVar3);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x8c;
        iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 200))();
      } while (iVar4 < iVar2);
    }
  }
  return;
}


