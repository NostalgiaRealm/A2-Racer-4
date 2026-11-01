
/* ==== TDaviAnimation.vmt_008 @ 0045ba0c ==== 
 * signature: undefined __register TDaviAnimation.vmt_008(int * param_1, int * param_2)
 * body: 0045ba0c-0045bb8c
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviAnimation_vmt_008(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  int local_10;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    FUN_0045b9d4(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  else {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TPersistent_vmt_000_0045b71c);
    if ((char)uVar1 == '\0') {
      TPersistent_vmt_008(param_1,param_2);
    }
    else if (param_1 != param_2) {
      piVar2 = (int *)FUN_0040312c(param_2,(int)&PTR_TPersistent_vmt_000_0045b71c);
      FUN_0045b9d4(param_1);
      if (piVar2[9] == 0) {
        iVar4 = FUN_00451bac(piVar2[0xc]);
        if (0 < iVar4) {
          iVar4 = FUN_00451bac(piVar2[0xc]);
          uVar5 = iVar4 - 1;
          uVar1 = extraout_ECX_00;
          if (SBORROW4(iVar4,1)) {
            uVar5 = thunk_FUN_00402808(uVar5);
            uVar1 = extraout_ECX_01;
          }
          if (-1 < (int)uVar5) {
            local_10 = uVar5 + 1;
            local_8 = 0;
            do {
              piVar3 = TDIB_vmt_00c((int *)&PTR_TPersistent_vmt_000_00454aa4,'\x01',uVar1);
              piVar6 = (int *)(*(code *)**(undefined4 **)piVar2[0xc])
                                        ((undefined4 *)piVar2[0xc],local_8);
              uVar1 = FUN_0040312c(piVar6,(int)&PTR_TPersistent_vmt_000_00454aa4);
              (**(code **)(*piVar3 + 8))(piVar3,uVar1);
              (**(code **)(*(int *)param_1[0xc] + 0xc))((int *)param_1[0xc],piVar3);
              local_8 = local_8 + 1;
              local_10 = local_10 + -1;
              uVar1 = extraout_ECX_02;
            } while (local_10 != 0);
          }
        }
      }
      else {
        piVar3 = FUN_0045a854(&PTR_TDaviAnimationLoaderFactory_vmt_000_0045a33c,extraout_EDX,
                              extraout_ECX);
        iVar4 = FUN_0045aba0(piVar3,*(byte **)(piVar2[9] + 4));
        param_1[9] = iVar4;
      }
      (**(code **)(*param_1 + 0x78))(param_1,piVar2[10]);
      (**(code **)(*param_1 + 0x74))(param_1,(char)piVar2[8]);
      (**(code **)(*param_1 + 0x7c))(param_1,piVar2[0xb]);
      (**(code **)(*param_1 + 0x80))(param_1,*(undefined1 *)((int)piVar2 + 0x3d));
      uVar1 = (**(code **)(*piVar2 + 0x2c))();
      (**(code **)(*param_1 + 0x40))(param_1,uVar1);
      uVar1 = (**(code **)(*piVar2 + 0x20))();
      (**(code **)(*param_1 + 0x34))(param_1,uVar1);
      *(char *)(param_1 + 0xf) = (char)piVar2[0xf];
      param_1[0x10] = piVar2[0x10];
      *(char *)(param_1 + 0x11) = (char)piVar2[0x11];
      (**(code **)(*param_1 + 0x3c))(param_1,(char)piVar2[0x13]);
      (**(code **)(*param_1 + 0x84))(param_1,piVar2[0x14]);
      (**(code **)(*param_1 + 0x88))(param_1,(char)piVar2[0x15]);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  return;
}


