
/* ==== FUN_0044c5dc @ 0044c5dc ==== 
 * signature: undefined FUN_0044c5dc(void)
 * body: 0044c5dc-0044c684;0044c6bd-0044cc2f;0044cc45-0044cc4b
 */

/* WARNING: Heritage AFTER dead removal. Example location: EAX : 0x0044c9df */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0044c5dc(int param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  LRESULT LVar4;
  FARPROC pFVar5;
  DWORD DVar6;
  undefined4 uVar7;
  HWND pHVar8;
  BOOL BVar9;
  HWND hWnd;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  int iVar10;
  int iVar11;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  pcStack_20 = thunk_FUN_00403408;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  param_2[3] = 0;
  iVar10 = *(int *)(*(int *)(param_1 + 0x98) + 8);
  if (-1 < iVar10 + -1) {
    iVar11 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      puVar3 = (undefined4 *)FUN_004102b0(*(undefined4 **)(param_1 + 0x98),iVar11);
      (*(code *)*puVar3)(puVar3[1],param_2);
      if ((char)puVar3 != '\0') {
        *in_FS_OFFSET = uStack_24;
        return;
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_0044c504(param_1,param_2);
  iVar10 = *param_2;
  if (iVar10 < 0x113) {
    if (iVar10 == 0x112) {
      if ((param_2[1] & 0xfff0U) == 0xf020) {
        FUN_0044cc94(param_1);
      }
      else if ((param_2[1] & 0xfff0U) == 0xf120) {
        FUN_0044cd34(param_1);
      }
      else {
        FUN_0044c554();
      }
      goto LAB_0044cc26;
    }
    if (iVar10 < 0x17) {
      if (iVar10 == 0x16) {
        if (param_2[1] != 0) {
          *(undefined1 *)(param_1 + 0x8c) = 1;
        }
        goto LAB_0044cc26;
      }
      switch(iVar10) {
      case 7:
        PostMessageA(*(HWND *)(param_1 + 0x24),0xb01a,0,0);
        FUN_0044c554();
        break;
      default:
        goto switchD_0044c67e_caseD_1;
      case 10:
        if (param_2[1] == 0) {
          FUN_0044c554();
          if (*(int *)(param_1 + 0x9c) == 0) {
            uVar7 = FUN_004442dc(*(undefined4 *)(param_1 + 0x24));
            *(undefined4 *)(param_1 + 0x9c) = uVar7;
          }
          FUN_0044c460(param_1);
        }
        else {
          FUN_0044c468(param_1);
          if (*(undefined4 **)(param_1 + 0x9c) != (undefined4 *)0x0) {
            FUN_00444390(*(undefined4 **)(param_1 + 0x9c));
            *(undefined4 *)(param_1 + 0x9c) = 0;
          }
          FUN_0044c554();
        }
        break;
      case 0xf:
        BVar9 = IsIconic(*(HWND *)(param_1 + 0x24));
        if (BVar9 == 0) {
          FUN_0044c554();
        }
        else {
          FUN_0044c590();
        }
        break;
      case 0x10:
        if (*(int **)(param_1 + 0x38) != (int *)0x0) {
          FUN_00449ac0(*(int **)(param_1 + 0x38),extraout_EDX,extraout_ECX);
        }
        break;
      case 0x14:
        *param_2 = 0x27;
        FUN_0044c554();
      }
      goto LAB_0044cc26;
    }
    if (iVar10 < 0x1e) {
      if (iVar10 == 0x1d) {
        FUN_0044bc10(DAT_004ac7d8);
        FUN_0044c554();
        goto LAB_0044cc26;
      }
      if (iVar10 == 0x1a) {
        FUN_00438be8(*(int *)PTR_DAT_004ab9d0,param_2[1]);
        FUN_0044c554();
        goto LAB_0044cc26;
      }
      if (iVar10 == 0x1c) {
        FUN_0044c554();
        *(bool *)(param_1 + 0x8d) = param_2[1] != 0;
        if (param_2[1] == 0) {
          FUN_0044c458(param_1);
          PostMessageA(*(HWND *)(param_1 + 0x24),0xb001,0,0);
        }
        else {
          FUN_0044c468(param_1);
          PostMessageA(*(HWND *)(param_1 + 0x24),0xb000,0,0);
        }
        goto LAB_0044cc26;
      }
    }
    else {
      if (iVar10 == 0x37) {
        iVar10 = FUN_0044cc78(param_1);
        param_2[3] = iVar10;
        goto LAB_0044cc26;
      }
      if (iVar10 == 0x4a) {
        if ((*(int *)param_2[2] == -0x21acbbac) && (*(char *)(param_1 + 0x8e) != '\0')) {
          if (*(int *)(param_1 + 0x90) == 0) {
            iVar10 = FUN_0040c978("vcltest3.dll",0x8000);
            *(int *)(param_1 + 0x90) = iVar10;
            if (iVar10 == 0) {
              DVar6 = GetLastError();
              param_2[3] = DVar6;
              *(undefined4 *)(param_1 + 0x90) = 0;
            }
            else {
              param_2[3] = 0;
              pFVar5 = GetProcAddress(*(HMODULE *)(param_1 + 0x90),"RegisterAutomation");
              if (pFVar5 != (FARPROC)0x0) {
                (*pFVar5)(pFVar5,param_2);
              }
            }
          }
          else {
            param_2[3] = 0;
          }
        }
        goto LAB_0044cc26;
      }
    }
  }
  else if (iVar10 < 0xb01b) {
    if (iVar10 == 0xb01a) {
      BVar9 = IsIconic(*(HWND *)(param_1 + 0x24));
      if (((BVar9 == 0) && (pHVar8 = GetFocus(), pHVar8 == *(HWND *)(param_1 + 0x24))) &&
         (pHVar8 = (HWND)FUN_0044442c(0), pHVar8 != (HWND)0x0)) {
        SetFocus(pHVar8);
      }
      goto LAB_0044cc26;
    }
    if (iVar10 < 0xb002) {
      if (iVar10 == 0xb001) {
        if (*(short *)(param_1 + 0xe2) != 0) {
          (**(code **)(param_1 + 0xe0))(*(undefined4 *)(param_1 + 0xe4),param_1);
        }
        goto LAB_0044cc26;
      }
      if (iVar10 - 0x132U < 7) {
        LVar4 = SendMessageA((HWND)param_2[2],iVar10 + 0xbc00,param_2[1],(LPARAM)param_2[2]);
        param_2[3] = LVar4;
        goto LAB_0044cc26;
      }
      if (iVar10 - 0x132U == 0xaece) {
        if (*(short *)(param_1 + 0xea) != 0) {
          (**(code **)(param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xec),param_1);
        }
        goto LAB_0044cc26;
      }
    }
    else {
      if (iVar10 == 0xb016) {
        uVar7 = FUN_0044d08c(param_1,param_2,extraout_ECX);
        if ((char)uVar7 != '\0') {
          param_2[3] = 1;
        }
        goto LAB_0044cc26;
      }
      if (iVar10 == 0xb017) {
        piVar1 = *(int **)(param_1 + 0x38);
        if ((piVar1 != (int *)0x0) && (iVar10 = FUN_004349e0(piVar1), iVar10 != 0)) {
          pHVar8 = (HWND)FUN_004349e0(piVar1);
          BVar9 = IsWindowEnabled(pHVar8);
          if (BVar9 != 0) {
            pHVar8 = (HWND)FUN_004349e0(piVar1);
            BVar9 = IsWindowVisible(pHVar8);
            if (BVar9 != 0) {
              DAT_004aa934 = 0;
              pHVar8 = GetFocus();
              hWnd = (HWND)FUN_004349e0(piVar1);
              SetFocus(hWnd);
              FUN_0042f720((int)piVar1,0x112,param_2[1],param_2[2]);
              SetFocus(pHVar8);
              DAT_004aa934 = 1;
              param_2[3] = 1;
            }
          }
        }
        goto LAB_0044cc26;
      }
    }
  }
  else {
    if (iVar10 == 0xb01f) {
      FUN_0044d6c4(param_1,*(ushort *)(param_2 + 1),param_2[2]);
      goto LAB_0044cc26;
    }
    if (iVar10 == 0xb020) {
      if (param_2[1] == 0) {
        FUN_0044d1cc(param_1,extraout_EDX,extraout_ECX,*(undefined4 *)param_2[2],
                     ((undefined4 *)param_2[2])[1]);
      }
      else {
        FUN_0044d228(param_1,extraout_EDX,extraout_ECX,*(int *)param_2[2],((int *)param_2[2])[1]);
      }
      goto LAB_0044cc26;
    }
    if (iVar10 == 0xb031) {
      if (param_2[1] == 1) {
        param_2[3] = *(int *)(param_1 + 0xa0);
      }
      else {
        *(int *)(param_1 + 0xa0) = param_2[2];
      }
      goto LAB_0044cc26;
    }
    if (iVar10 - 0xb03fU < 2) {
      bVar2 = FUN_0044e3bc(param_1,iVar10,(int *)param_2[2]);
      param_2[3] = bVar2 & 0x7f;
      goto LAB_0044cc26;
    }
  }
switchD_0044c67e_caseD_1:
  FUN_0044c554();
LAB_0044cc26:
  *in_FS_OFFSET = uStack_24;
  return;
}


