
/* ==== FUN_0044163c @ 0044163c ==== 
 * signature: undefined FUN_0044163c(void)
 * body: 0044163c-004416e4;0044171d-00441c8f;00441ca5-00441cab
 */

/* WARNING: Heritage AFTER dead removal. Example location: EAX : 0x00441a3f */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0044163c(int param_1,int *param_2)

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
  pcStack_20 = thunk_FUN_00403180;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  param_2[3] = 0;
  iVar10 = *(int *)(*(int *)(param_1 + 0x98) + 8);
  if (-1 < iVar10 + -1) {
    iVar11 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      puVar3 = (undefined4 *)FUN_0040f024(*(undefined4 **)(param_1 + 0x98),iVar11);
      (*(code *)*puVar3)(puVar3[1],param_2);
      if ((char)puVar3 != '\0') {
        *in_FS_OFFSET = uStack_24;
        return;
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_00441564(param_1,param_2);
  iVar10 = *param_2;
  if (iVar10 < 0x113) {
    if (iVar10 == 0x112) {
      if ((param_2[1] & 0xfff0U) == 0xf020) {
        FUN_00441cf4(param_1);
      }
      else if ((param_2[1] & 0xfff0U) == 0xf120) {
        FUN_00441d94(param_1);
      }
      else {
        FUN_004415b4();
      }
      goto LAB_00441c86;
    }
    if (iVar10 < 0x17) {
      if (iVar10 == 0x16) {
        if (param_2[1] != 0) {
          *(undefined1 *)(param_1 + 0x8c) = 1;
        }
        goto LAB_00441c86;
      }
      switch(iVar10) {
      case 7:
        PostMessageA(*(HWND *)(param_1 + 0x24),0xb01a,0,0);
        FUN_004415b4();
        break;
      default:
        goto switchD_004416de_caseD_1;
      case 10:
        if (param_2[1] == 0) {
          FUN_004415b4();
          if (*(int *)(param_1 + 0x9c) == 0) {
            uVar7 = FUN_0043992c(*(undefined4 *)(param_1 + 0x24));
            *(undefined4 *)(param_1 + 0x9c) = uVar7;
          }
          FUN_004414c0(param_1);
        }
        else {
          FUN_004414c8(param_1);
          if (*(undefined4 **)(param_1 + 0x9c) != (undefined4 *)0x0) {
            FUN_004399e0(*(undefined4 **)(param_1 + 0x9c));
            *(undefined4 *)(param_1 + 0x9c) = 0;
          }
          FUN_004415b4();
        }
        break;
      case 0xf:
        BVar9 = IsIconic(*(HWND *)(param_1 + 0x24));
        if (BVar9 == 0) {
          FUN_004415b4();
        }
        else {
          FUN_004415f0();
        }
        break;
      case 0x10:
        if (*(int **)(param_1 + 0x38) != (int *)0x0) {
          FUN_0043f110(*(int **)(param_1 + 0x38),extraout_EDX,extraout_ECX);
        }
        break;
      case 0x14:
        *param_2 = 0x27;
        FUN_004415b4();
      }
      goto LAB_00441c86;
    }
    if (iVar10 < 0x1e) {
      if (iVar10 == 0x1d) {
        FUN_00440c70(DAT_004477c8);
        FUN_004415b4();
        goto LAB_00441c86;
      }
      if (iVar10 == 0x1a) {
        FUN_0042ea34(*(int *)PTR_DAT_00446d64,param_2[1]);
        FUN_004415b4();
        goto LAB_00441c86;
      }
      if (iVar10 == 0x1c) {
        FUN_004415b4();
        *(bool *)(param_1 + 0x8d) = param_2[1] != 0;
        if (param_2[1] == 0) {
          FUN_004414b8(param_1);
          PostMessageA(*(HWND *)(param_1 + 0x24),0xb001,0,0);
        }
        else {
          FUN_004414c8(param_1);
          PostMessageA(*(HWND *)(param_1 + 0x24),0xb000,0,0);
        }
        goto LAB_00441c86;
      }
    }
    else {
      if (iVar10 == 0x37) {
        iVar10 = FUN_00441cd8(param_1);
        param_2[3] = iVar10;
        goto LAB_00441c86;
      }
      if (iVar10 == 0x4a) {
        if ((*(int *)param_2[2] == -0x21acbbac) && (*(char *)(param_1 + 0x8e) != '\0')) {
          if (*(int *)(param_1 + 0x90) == 0) {
            iVar10 = FUN_0040bc88("vcltest3.dll",0x8000);
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
        goto LAB_00441c86;
      }
    }
  }
  else if (iVar10 < 0xb01b) {
    if (iVar10 == 0xb01a) {
      BVar9 = IsIconic(*(HWND *)(param_1 + 0x24));
      if (((BVar9 == 0) && (pHVar8 = GetFocus(), pHVar8 == *(HWND *)(param_1 + 0x24))) &&
         (pHVar8 = (HWND)FUN_00439a7c(0), pHVar8 != (HWND)0x0)) {
        SetFocus(pHVar8);
      }
      goto LAB_00441c86;
    }
    if (iVar10 < 0xb002) {
      if (iVar10 == 0xb001) {
        if (*(short *)(param_1 + 0xe2) != 0) {
          (**(code **)(param_1 + 0xe0))(*(undefined4 *)(param_1 + 0xe4),param_1);
        }
        goto LAB_00441c86;
      }
      if (iVar10 - 0x132U < 7) {
        LVar4 = SendMessageA((HWND)param_2[2],iVar10 + 0xbc00,param_2[1],(LPARAM)param_2[2]);
        param_2[3] = LVar4;
        goto LAB_00441c86;
      }
      if (iVar10 - 0x132U == 0xaece) {
        if (*(short *)(param_1 + 0xea) != 0) {
          (**(code **)(param_1 + 0xe8))(*(undefined4 *)(param_1 + 0xec),param_1);
        }
        goto LAB_00441c86;
      }
    }
    else {
      if (iVar10 == 0xb016) {
        uVar7 = FUN_00442064(param_1,param_2,extraout_ECX);
        if ((char)uVar7 != '\0') {
          param_2[3] = 1;
        }
        goto LAB_00441c86;
      }
      if (iVar10 == 0xb017) {
        piVar1 = *(int **)(param_1 + 0x38);
        if ((piVar1 != (int *)0x0) && (iVar10 = FUN_0042a8b4(piVar1), iVar10 != 0)) {
          pHVar8 = (HWND)FUN_0042a8b4(piVar1);
          BVar9 = IsWindowEnabled(pHVar8);
          if (BVar9 != 0) {
            pHVar8 = (HWND)FUN_0042a8b4(piVar1);
            BVar9 = IsWindowVisible(pHVar8);
            if (BVar9 != 0) {
              DAT_00446860 = 0;
              pHVar8 = GetFocus();
              hWnd = (HWND)FUN_0042a8b4(piVar1);
              SetFocus(hWnd);
              FUN_00425780((int)piVar1,0x112,param_2[1],param_2[2]);
              SetFocus(pHVar8);
              DAT_00446860 = 1;
              param_2[3] = 1;
            }
          }
        }
        goto LAB_00441c86;
      }
    }
  }
  else {
    if (iVar10 == 0xb01f) {
      func_0x00442538(param_1,(short)param_2[1],param_2[2]);
      goto LAB_00441c86;
    }
    if (iVar10 == 0xb020) {
      if (param_2[1] == 0) {
        FUN_0044218c(param_1,extraout_EDX,extraout_ECX,*(undefined4 *)param_2[2],
                     ((undefined4 *)param_2[2])[1]);
      }
      else {
        FUN_004421e8(param_1,extraout_EDX,extraout_ECX,*(int *)param_2[2],((int *)param_2[2])[1]);
      }
      goto LAB_00441c86;
    }
    if (iVar10 == 0xb031) {
      if (param_2[1] == 1) {
        param_2[3] = *(int *)(param_1 + 0xa0);
      }
      else {
        *(int *)(param_1 + 0xa0) = param_2[2];
      }
      goto LAB_00441c86;
    }
    if (iVar10 - 0xb03fU < 2) {
      bVar2 = FUN_00443230(param_1,iVar10,(int *)param_2[2]);
      param_2[3] = bVar2 & 0x7f;
      goto LAB_00441c86;
    }
  }
switchD_004416de_caseD_1:
  FUN_004415b4();
LAB_00441c86:
  *in_FS_OFFSET = uStack_24;
  return;
}


