
/* ==== FUN_004bd840 @ 004bd840 ==== 
 * signature: undefined __thiscall FUN_004bd840(void * this, int param_1)
 * body: 004bd840-004bd886;004bd88a-004bd8b5;004bd8be-004bd8e3;004bd8ec-004bd937;004bd940-004bd962;004bd96b-004bd990;004bd999-004bd9d8;004bd9e1-004bda03;004bda07-004bda2c;004bda30-004bda53;004bda57-004bda6e;004bda77-004bda99;004bdaa2-004bdac4;004bdac8-004bdaed;004bdaf1-004bdb2a;004bdb33-004bdb55;004bdb59-004bdb7e;004bdb82-004bdc98;004bdc9c-004bdcc8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bd887-004bd889 004bd8b6-004bd8bd 004bd8e4-004bd8eb 004bd938-004bd93f 004bd963-004bd96a 004bd991-004bd998 004bd9d9-004bd9e0 004bda04-004bda06 004bda2d-004bda2f 004bda54-004bda56 004bda6f-004bda76 004bda9a-004bdaa1 004bdac5-004bdac7 004bdaee-004bdaf0 004bdb2b-004bdb32 004bdb56-004bdb58 004bdb7f-004bdb81 004bdc99-004bdc9b
 */

void __thiscall FUN_004bd840(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 in_stack_ffffff88;
  undefined4 in_stack_ffffff8c;
  undefined4 uVar9;
  undefined4 auStack_40 [8];
  undefined4 auStack_20 [8];
  
  FUN_004bd640((int)this);
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar7 = param_1 * 0xac;
  iVar1 = *(int *)(iVar7 + 0x94 + DAT_0073b5c8);
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  if (*(int *)(iVar7 + DAT_0073b5c8) == 1) {
    if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar7 = *(int *)(iVar7 + 0x7c + DAT_0073b5c8);
  }
  else {
    if (*(int *)(iVar7 + DAT_0073b5c8) != 2) {
      if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
      }
      if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      if (*(int *)(iVar7 + DAT_0073b5c8 + 0x9c) != 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____corrupt_mesh_type__duri_005b2570);
      }
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____string_is_not_initialis_005969b0);
    }
    if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
    }
    if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
    }
    if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    iVar7 = *(int *)(iVar7 + 0x84 + DAT_0073b5c8);
  }
  FUN_004bd600(this,iVar7,iVar1);
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      piVar2 = (int *)FUN_004b6080(&DAT_0073b5c8,param_1);
      if (*piVar2 == 1) {
        puVar4 = auStack_40;
        uVar9 = 0x4bdbe1;
        iVar5 = iVar6;
        pvVar3 = (void *)FUN_004b6080(&DAT_0073b5c8,param_1);
        puVar4 = (undefined4 *)FUN_004bf960(pvVar3,puVar4,iVar5);
        puVar8 = (undefined4 *)&stack0xffffff88;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_004bf9e0(this,iVar6,in_stack_ffffff88,in_stack_ffffff8c,uVar9);
      }
      else {
        puVar4 = auStack_20;
        uVar9 = 0x4bdc1c;
        iVar5 = iVar6;
        pvVar3 = (void *)FUN_004b6080(&DAT_0073b5c8,param_1);
        puVar4 = (undefined4 *)FUN_004bfc00(pvVar3,puVar4,iVar5);
        puVar8 = (undefined4 *)&stack0xffffff88;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_004bfaf0(this,iVar6,in_stack_ffffff88,in_stack_ffffff8c,uVar9);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      iVar6 = FUN_004b6080(&DAT_0073b5c8,param_1);
      FUN_004bf8c0(iVar6);
      if ((iVar7 < 0) || (*(int *)(iVar6 + 0x94) <= iVar7)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____getting_index____d___is_005b24cc);
      }
      FUN_004bf8f0(this,iVar7,*(undefined2 *)(*(int *)(iVar6 + 0x90) + iVar7 * 2));
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  FUN_004bf570(this);
  return;
}


