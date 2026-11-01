
/* ==== FUN_0047c1d0 @ 0047c1d0 ==== 
 * signature: undefined __thiscall FUN_0047c1d0(void * this, int * param_1)
 * body: 0047c1d0-0047c2d0
 */

void __thiscall FUN_0047c1d0(void *this,int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined **appuStack_2c [3];
  undefined1 auStack_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056bb01;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_1 + 0xc))((int)this + 0x34);
  if (iVar1 != 0) {
    iVar1 = FUN_0047bc10((int)param_1);
    puVar2 = FUN_004797e0(&stack0xffffffa4,s_Invalid_Add__Component_005a9b78,iVar1);
    pcStack_8 = (code *)0x0;
    puVar2 = FUN_004796b0(auStack_4c,puVar2,s_contains_005a9b6c);
    pcStack_8._0_1_ = 1;
    puVar2 = FUN_0047c9a0(auStack_3c,puVar2,(int)this + 0x34);
    pcStack_8._0_1_ = 2;
    FUN_00558826(appuStack_2c);
    pcStack_8._0_1_ = 3;
    FUN_004028f0(auStack_20,'\0');
    pcStack_8._0_1_ = 4;
    appuStack_2c[0] = &PTR_FUN_00576b14;
    FUN_004093c0(auStack_20,puVar2,0,0xffffffff);
    pcStack_8 = (code *)CONCAT31(pcStack_8._1_3_,2);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(appuStack_2c,&DAT_0057f730);
  }
  FUN_004a5620(*(void **)((int)this + 0x78),*(undefined4 **)((int)*(void **)((int)this + 0x78) + 8),
               1,(undefined4 *)&stack0x00000000);
  ExceptionList = pvStack_10;
  return;
}


