
/* ==== FUN_0051a300 @ 0051a300 ==== 
 * signature: undefined __cdecl FUN_0051a300(int * param_1)
 * body: 0051a300-0051a4af
 */

void __cdecl FUN_0051a300(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_10 = 0;
  if (DAT_0074c6e8 != (int *)0x0) {
    iVar3 = DAT_0074c6e8[1];
    local_c = 0;
    iVar1 = FUN_00514af0(DAT_0074c6e8);
    if (0 < iVar1) {
      local_8 = 4;
      do {
        if (iVar3 != 0) {
          piVar5 = *(int **)(iVar3 + 0x3c);
          if (piVar5 != (int *)0x0) {
            iVar4 = piVar5[1];
            local_14 = 0;
            local_10 = FUN_00514af0(piVar5);
            if (0 < local_10) {
              iVar2 = 4;
              do {
                if (((iVar4 == 0) || (iVar4 == 2)) || (iVar4 == 1)) break;
                local_14 = local_14 + 1;
                iVar2 = iVar2 + 4;
                iVar4 = *(int *)(*(int *)(iVar3 + 0x3c) + iVar2);
              } while (local_14 < local_10);
            }
          }
          if (local_14 != local_10) {
            FUN_00558953(param_1,(byte *)s_hash__d_f_d_005bc6f8);
            iVar4 = *(int *)(iVar3 + 0x34);
            if (iVar4 != 0) {
              piVar5 = (int *)(iVar4 + 4);
              iVar4 = *(int *)(iVar4 + 4);
              while (iVar4 != 0) {
                piVar5 = piVar5 + 1;
                FUN_00558953(param_1,&DAT_005bc6f0);
                iVar4 = *piVar5;
              }
            }
            FUN_00558953(param_1,(byte *)s_neighbors__005bc6e0);
            if (*(int **)(iVar3 + 0x3c) != (int *)0x0) {
              local_14 = 0;
              local_10 = FUN_00514af0(*(int **)(iVar3 + 0x3c));
              iVar3 = local_10;
              if (0 < local_10) {
                do {
                  FUN_00558953(param_1,(byte *)&PTR_DAT_005bc6dc);
                  iVar3 = iVar3 + -1;
                  local_14 = local_10;
                } while (iVar3 != 0);
              }
            }
            FUN_00558953(param_1,&DAT_005ae60c);
          }
        }
        local_8 = local_8 + 4;
        local_c = local_c + 1;
        iVar3 = *(int *)(local_8 + (int)DAT_0074c6e8);
      } while (local_c < iVar1);
    }
  }
  return;
}


