/* ===== Function 3738: CompileKernel @ 1828d3300 size=85 conv=unknown ===== */

void CompileKernel(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
                    /* 0x28d3300  1  CompileKernel */
  local_38 = &local_res8;
  local_30 = local_res10;
  local_28 = &local_res18;
  local_20 = &local_res20;
  local_18 = &stack0x00000028;
  local_10 = &stack0x00000030;
  local_res8 = param_1;
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1828cce20(&local_38);
  return;
}
/* ===== Function 3739: ComposerAddBarrier @ 1828d3360 size=24 conv=unknown ===== */

void ComposerAddBarrier(undefined8 param_1)

{
  undefined8 local_res8 [4];
  
                    /* 0x28d3360  2  ComposerAddBarrier */
  local_res8[0] = param_1;
  FUN_1828ccd60(local_res8);
  return;
}
/* ===== Function 3740: ComposerAddCopyBuffer @ 1828d3380 size=69 conv=unknown ===== */

void ComposerAddCopyBuffer
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
                    /* 0x28d3380  3  ComposerAddCopyBuffer */
  local_28 = &local_res8;
  local_20 = &local_res10;
  local_18 = &local_res18;
  local_10 = &local_res20;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1828ccea0(&local_28);
  return;
}
/* ===== Function 3741: ComposerAddDispatch @ 1828d33d0 size=77 conv=unknown ===== */

void ComposerAddDispatch(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  
                    /* 0x28d33d0  4  ComposerAddDispatch */
  local_38 = &stack0x00000028;
  local_30 = &local_res8;
  local_28 = &local_res10;
  local_20 = &local_res20;
  local_18 = &local_res18;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1828cc9b0(&local_38);
  return;
}
/* ===== Function 3742: ComposerAddMarker @ 1828d3420 size=57 conv=unknown ===== */

void ComposerAddMarker(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18 [4];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined4 *local_18;
  
                    /* 0x28d3420  5  ComposerAddMarker */
  local_28 = &local_res8;
  local_20 = &local_res10;
  local_18 = local_res18;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_1828cd390(&local_28);
  return;
}
/* ===== Function 3743: ComposerAddMetacommandExec @ 1828d3460 size=69 conv=unknown ===== */

void ComposerAddMetacommandExec
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined4 *local_10;
  
                    /* 0x28d3460  6  ComposerAddMetacommandExec */
  local_28 = &local_res8;
  local_20 = &local_res10;
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  FUN_1828cd200(&local_28);
  return;
}
/* ===== Function 3744: ComposerAddMetacommandInit @ 1828d34b0 size=69 conv=unknown ===== */

void ComposerAddMetacommandInit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined4 *local_10;
  
                    /* 0x28d34b0  7  ComposerAddMetacommandInit */
  local_28 = &local_res8;
  local_20 = &local_res10;
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  FUN_1828ccbd0(&local_28);
  return;
}
/* ===== Function 3745: ComposerAllocate @ 1828d3500 size=45 conv=unknown ===== */

void ComposerAllocate(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8 [2];
  undefined8 local_res18 [2];
  undefined8 *local_18;
  undefined8 *local_10;
  
                    /* 0x28d3500  8  ComposerAllocate */
  local_18 = local_res8;
  local_10 = local_res18;
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_1828cc8c0(&local_18);
  return;
}
/* ===== Function 3746: ComposerCompose @ 1828d3530 size=57 conv=unknown ===== */

void ComposerCompose(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  
                    /* 0x28d3530  9  ComposerCompose */
  local_28 = &local_res8;
  local_20 = &local_res10;
  local_18 = local_res18;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_1828ccf10(&local_28);
  return;
}
/* ===== Function 3747: ComposerFree @ 1828d3570 size=24 conv=unknown ===== */

void ComposerFree(undefined8 param_1)

{
  undefined8 local_res8 [4];
  
                    /* 0x28d3570  10  ComposerFree */
  local_res8[0] = param_1;
  FUN_1828cd400(local_res8);
  return;
}
/* ===== Function 3748: ComposerReadyKernel @ 1828d3590 size=69 conv=unknown ===== */

void ComposerReadyKernel(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
                    /* 0x28d3590  11  ComposerReadyKernel */
  local_28 = &local_res8;
  local_20 = &local_res20;
  local_18 = &local_res10;
  local_10 = &local_res18;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1828cca50(&local_28);
  return;
}
/* ===== Function 3749: ComposerReset @ 1828d35e0 size=24 conv=unknown ===== */

void ComposerReset(undefined8 param_1)

{
  undefined8 local_res8 [4];
  
                    /* 0x28d35e0  12  ComposerReset */
  local_res8[0] = param_1;
  FUN_1828ccdc0(local_res8);
  return;
}
/* ===== Function 3750: CreateMetaCommandCompiler @ 1828d3600 size=61 conv=unknown ===== */

void CreateMetaCommandCompiler
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_28;
  undefined8 local_20;
  undefined4 *local_18;
  undefined8 *local_10;
  
                    /* 0x28d3600  13  CreateMetaCommandCompiler */
  local_28 = &local_res20;
  local_18 = local_res10;
  local_10 = &local_res18;
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_20 = param_1;
  FUN_1828cd110(&local_28);
  return;
}
/* ===== Function 3751: CreateMetaCommandPlan @ 1828d3640 size=93 conv=unknown ===== */

void CreateMetaCommandPlan
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_res8;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined8 *local_48;
  undefined4 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined4 *local_18;
  
                    /* 0x28d3640  14  CreateMetaCommandPlan */
  local_48 = &local_res8;
  local_40 = local_res10;
  local_38 = &stack0x00000030;
  local_30 = &stack0x00000028;
  local_28 = &stack0x00000038;
  local_20 = &local_res18;
  local_18 = local_res20;
  local_res8 = param_1;
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  FUN_1828ccfc0(&local_48);
  return;
}
/* ===== Function 3752: DestroyMetaCommandCompiler @ 1828d36a0 size=24 conv=unknown ===== */

void DestroyMetaCommandCompiler(undefined8 param_1)

{
  undefined8 local_res8 [4];
  
                    /* 0x28d36a0  15  DestroyMetaCommandCompiler */
  local_res8[0] = param_1;
  FUN_1828ccf80(local_res8);
  return;
}
/* ===== Function 3754: GetRequiredResourceSize @ 1828d36e0 size=77 conv=unknown ===== */

void GetRequiredResourceSize
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined4 *local_28;
  undefined1 *local_20;
  undefined4 *local_18;
  
                    /* 0x28d36e0  16  GetRequiredResourceSize */
  local_38 = &local_res8;
  local_30 = &local_res10;
  local_28 = local_res18;
  local_20 = &stack0x00000028;
  local_18 = local_res20;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_1828ccab0(&local_38);
  return;
}
/* ===== Function 3755: QueryMetaCommand @ 1828d3730 size=85 conv=unknown ===== */

void QueryMetaCommand(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_res8;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined8 *local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  undefined4 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
                    /* 0x28d3730  17  QueryMetaCommand */
  local_38 = &local_res8;
  local_30 = local_res10;
  local_28 = &local_res18;
  local_20 = local_res20;
  local_18 = &stack0x00000028;
  local_10 = &stack0x00000030;
  local_res8 = param_1;
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  FUN_1828cd470(&local_38);
  return;
}
/* ===== Function 158529: entry @ 185209180 size=61 conv=unknown ===== */

void entry(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  if (param_2 == 1) {
    __security_init_cookie();
  }
  dllmain_dispatch(param_1,param_2,param_3);
  return;
}
/* ===== Function 158541: tls_callback_1 @ 1852096a0 size=165 conv=unknown ===== */

void tls_callback_1(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar5 = *(int **)(lVar1 + 0x120);
    if (*(int **)(lVar1 + 0x120) != (int *)0x0) {
      while( true ) {
        iVar3 = *piVar5 + -1;
        if (-1 < iVar3) {
          plVar4 = (longlong *)(piVar5 + ((longlong)iVar3 + 2) * 2);
          do {
            if (*plVar4 != 0) {
              (*(code *)PTR__guard_dispatch_icall_1858e9750)();
            }
            plVar4 = plVar4 + -1;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        piVar2 = *(int **)(piVar5 + 2);
        if (piVar2 == (int *)0x0) break;
        thunk_FUN_1852706dc(piVar5);
        *(int **)(lVar1 + 0x120) = piVar2;
        piVar5 = piVar2;
      }
      *(undefined8 *)(lVar1 + 0x120) = 0;
    }
  }
  return;
}
/* ===== Function 158545: tls_callback_0 @ 185209830 size=102 conv=unknown ===== */

void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((param_2 == 2) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(char *)(lVar1 + 0x230) != '\x01')) {
    *(undefined1 *)(lVar1 + 0x230) = 1;
    for (plVar2 = &DAT_1858f05a0; plVar2 != &DAT_1858f05a0; plVar2 = plVar2 + 1) {
      if (*plVar2 != 0) {
        (*(code *)PTR__guard_dispatch_icall_1858e9750)();
      }
    }
  }
  return;
}
