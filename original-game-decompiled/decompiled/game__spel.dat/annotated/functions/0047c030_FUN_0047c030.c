
/* ==== FUN_0047c030 @ 0047c030 ==== 
 * signature: undefined __thiscall FUN_0047c030(void * this, int param_1)
 * body: 0047c030-0047c1c1
 */

void __thiscall FUN_0047c030(void *this,int param_1)

{
  void *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  code *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_0056bacf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_0047bc00((int)this);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x30))(param_1);
    iVar2 = (*(code *)**(undefined4 **)((int)this + 0x74))();
    param_1 = 0;
    if (0 < iVar2) {
      do {
        pcStack_28 = (char *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
        this_00 = *(void **)(*(int *)(*(int *)((int)this + 0x78) + 4) + param_1 * 4);
        auStack_2c[0] = (undefined1)param_1;
        uVar5 = 0xffffffff;
        pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9b18;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        uVar3 = FUN_00402a00(auStack_2c,uVar5,'\x01');
        if ((char)uVar3 != '\0') {
          pcVar7 = s_C__Work_A2IV_Game_prog_Hud_Compo_005a9b18;
          pcVar8 = pcStack_28;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar8 = pcVar8 + 4;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar8 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          }
          FUN_004029e0(auStack_2c,uVar5);
        }
        uStack_4 = 0;
        puVar4 = FUN_004797e0(auStack_1c,s_NULL_Component_in_Child_Componen_005a9b44,
                              (int)this + 0x34);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_00487bc0((int)this_00,puVar4,(int)auStack_2c);
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_4 = 0xffffffff;
        if (pcStack_28 != (char *)0x0) {
          cVar1 = pcStack_28[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_0054b339(pcStack_28 + -1);
          }
          else {
            pcStack_28[-1] = cVar1 + -1;
          }
        }
        pcStack_28 = (char *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
        FUN_0047bda0(this_00,(int)this + 0x44);
        param_1 = param_1 + 1;
      } while (param_1 < iVar2);
    }
  }
  ExceptionList = local_c;
  return;
}


