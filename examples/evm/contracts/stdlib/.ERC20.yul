object "Contract" {
  code {
    mstore(64, 128)
    switch shr(224, calldataload(0))
    case 0x18160ddd {
      let _r := f_ERC20_totalSupply()
      let _v := mload(add(_r, mul(1, 32)))
      mstore(0, shr(1, _v))
      return(0, 32)
    }
    case 0x9cc7f708 {
      let _r := f_ERC20_balanceOf(or(shl(1, calldataload(4)), 1))
      let _v := mload(add(_r, mul(1, 32)))
      mstore(0, shr(1, _v))
      return(0, 32)
    }
    case 0x0cf79e0a {
      let _r := f_ERC20_transfer(or(shl(1, calldataload(4)), 1), or(shl(1, calldataload(36)), 1))
      return(0, 0)
    }
    case 0xcca16fa8 {
      let _r := f_ERC20_allowance(or(shl(1, calldataload(4)), 1), or(shl(1, calldataload(36)), 1))
      let _v := mload(add(_r, mul(1, 32)))
      mstore(0, shr(1, _v))
      return(0, 32)
    }
    case 0x5d35a3d9 {
      let _r := f_ERC20_approve(or(shl(1, calldataload(4)), 1), or(shl(1, calldataload(36)), 1))
      return(0, 0)
    }
    case 0x310ed7f0 {
      let _r := f_ERC20_transferFrom(or(shl(1, calldataload(4)), 1), or(shl(1, calldataload(36)), 1), or(shl(1, calldataload(68)), 1))
      return(0, 0)
    }
    case 0x1b2ef1ca {
      let _r := f_ERC20_mint(or(shl(1, calldataload(4)), 1), or(shl(1, calldataload(36)), 1))
      return(0, 0)
    }
    case 0xb390c0ab {
      let _r := f_ERC20_burn(or(shl(1, calldataload(4)), 1), or(shl(1, calldataload(36)), 1))
      return(0, 0)
    }
    default {
      revert(0, 0)
    }
    function lean_box(n) -> r {
      r := or(shl(1, n), 1)
    }
    function lean_unbox(o) -> r {
      r := shr(1, o)
    }
    function lean_alloc_ctor(tag, nfields) -> obj {
      let ptr := mload(64)
      mstore(64, add(ptr, mul(add(nfields, 1), 32)))
      mstore(ptr, or(or(tag, shl(8, nfields)), shl(32, 1)))
      obj := ptr
    }
    function lean_ctor_get(obj, i) -> v {
      v := mload(add(obj, mul(add(i, 1), 32)))
    }
    function lean_ctor_set(obj, i, v) {
      mstore(add(obj, mul(add(i, 1), 32)), v)
    }
    function lean_obj_tag(o) -> t {
      t := and(mload(o), 255)
      if and(o, 1) {
        t := shr(1, o)
      }
    }
    function f_Nat_add(a, b) -> r {
      r := or(shl(1, add(shr(1, a), shr(1, b))), 1)
    }
    function f_Nat_sub(a, b) -> r {
      r := or(shl(1, 0), 1)
      if iszero(lt(shr(1, a), shr(1, b))) {
        let va := shr(1, a)
        let vb := shr(1, b)
        r := or(shl(1, sub(va, vb)), 1)
      }
    }
    function f_Nat_mul(a, b) -> r {
      r := or(shl(1, mul(shr(1, a), shr(1, b))), 1)
    }
    function f_Nat_decEq(a, b) -> r {
      r := or(shl(1, 0), 1)
      if eq(shr(1, a), shr(1, b)) {
        r := or(shl(1, 1), 1)
      }
    }
    function f_Nat_decLe(a, b) -> r {
      r := or(shl(1, 0), 1)
      if iszero(gt(shr(1, a), shr(1, b))) {
        r := or(shl(1, 1), 1)
      }
    }
    function f_Nat_decLt(a, b) -> r {
      r := or(shl(1, 0), 1)
      if lt(shr(1, a), shr(1, b)) {
        r := or(shl(1, 1), 1)
      }
    }
    function f_Nat_div(a, b) -> r {
      if iszero(b) {
        revert(0, 0)
      }
      r := or(shl(1, div(shr(1, a), shr(1, b))), 1)
    }
    function f_Nat_mod(a, b) -> r {
      if iszero(b) {
        revert(0, 0)
      }
      r := or(shl(1, mod(shr(1, a), shr(1, b))), 1)
    }
    function f_Nat_shiftRight(a, b) -> r {
      r := or(shl(1, shr(shr(1, b), shr(1, a))), 1)
    }
    function f_Nat_shiftLeft(a, b) -> r {
      r := or(shl(1, shl(shr(1, b), shr(1, a))), 1)
    }
    function f_Nat_land(a, b) -> r {
      r := or(shl(1, and(shr(1, a), shr(1, b))), 1)
    }
    function f_Nat_lor(a, b) -> r {
      r := or(shl(1, or(shr(1, a), shr(1, b))), 1)
    }
    function f_Nat_xor(a, b) -> r {
      r := or(shl(1, xor(shr(1, a), shr(1, b))), 1)
    }
    function lean_array_get_size(a) -> r {
      r := or(shl(1, mload(add(a, 32))), 1)
    }
    function lean_array_get_core(a, i) -> r {
      r := mload(add(add(a, 96), mul(i, 32)))
    }
    function lean_array_set_core(a, i, v) {
      mstore(add(add(a, 96), mul(i, 32)), v)
    }
    function lean_array_push(a, v) -> r {
      let sz := mload(add(a, 32))
      mstore(add(add(a, 96), mul(sz, 32)), v)
      mstore(add(a, 32), add(sz, 1))
      r := a
    }
    function lean_array_mk(n) -> r {
      let _mk_ptr := mload(64)
      mstore(64, add(_mk_ptr, mul(add(n, 3), 32)))
      mstore(_mk_ptr, or(or(or(248, shl(8, 0)), shl(16, 0)), shl(32, 1)))
      mstore(add(_mk_ptr, 32), 0)
      mstore(add(_mk_ptr, 64), shr(1, n))
      r := _mk_ptr
    }
    function f_Array_mkEmpty(c) -> r {
      r := lean_array_mk(c)
    }
    function f_Array_push(a, v) -> r {
      r := lean_array_push(a, v)
    }
    function f_Array_size(a) -> r {
      r := lean_array_get_size(a)
    }
    function f_Array_get_x21InternalBorrowed(_s, a, i) -> r {
      r := lean_array_get_core(a, shr(1, i))
    }
    function f_ERC20_totalSupplyVar() -> _ret {
      let v___uniq_1_ := or(shl(1, 0), 1)
      _ret := v___uniq_1_
      leave
      leave
    }
    function f_ERC20_balances() -> _ret {
      let v___uniq_1_ := or(shl(1, 1), 1)
      _ret := v___uniq_1_
      leave
      leave
    }
    function f_ERC20_allowances() -> _ret {
      let v___uniq_1_ := or(shl(1, 2), 1)
      _ret := v___uniq_1_
      leave
      leave
    }
    function f_ERC20_doUpdate(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let v___uniq_20_ := or(shl(1, 0), 1)
      let v___uniq_21_ := f_Nat_decEq(v___uniq_1_, v___uniq_20_)
      switch lean_obj_tag(v___uniq_21_)
      case 0 {
        let v___uniq_22_ := f_Nat_decEq(v___uniq_2_, v___uniq_20_)
        switch lean_obj_tag(v___uniq_22_)
        case 0 {
          mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
          let v___uniq_23_ := or(shl(1, 0), 1)
          switch lean_obj_tag(v___uniq_23_)
          case 0 {
            let v___uniq_24_ := or(shl(1, 1), 1)
            let v___uniq_92_ := or(shl(1, 32), 1)
            mstore(shr(1, v___uniq_92_), shr(1, v___uniq_24_))
            let v___uniq_93_ := or(shl(1, 0), 1)
            switch lean_obj_tag(v___uniq_93_)
            case 0 {
              let v___uniq_94_ := or(shl(1, 64), 1)
              let _t0 := mload(64)
              mstore(64, add(_t0, mul(2, 32)))
              mstore(_t0, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t0, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_94_))), 1))
              let v___uniq_95_ := _t0
              switch lean_obj_tag(v___uniq_95_)
              case 0 {
                let v___uniq_96_ := mload(add(v___uniq_95_, mul(1, 32)))
                let _t1 := mload(64)
                mstore(64, add(_t1, mul(2, 32)))
                mstore(_t1, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                mstore(add(_t1, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_96_))), 1))
                let v___uniq_97_ := _t1
                let v___uniq_79_ := v___uniq_97_
                switch lean_obj_tag(v___uniq_79_)
                case 0 {
                  let v___uniq_80_ := mload(add(v___uniq_79_, mul(1, 32)))
                  let v___uniq_81_ := f_Nat_decLt(v___uniq_80_, v___uniq_3_)
                  switch lean_obj_tag(v___uniq_81_)
                  case 0 {
                    let v___uniq_61_ := v___uniq_80_
                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                    let v___uniq_62_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_62_)
                    case 0 {
                      let v___uniq_63_ := or(shl(1, 32), 1)
                      mstore(shr(1, v___uniq_63_), shr(1, v___uniq_24_))
                      let v___uniq_64_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_64_)
                      case 0 {
                        let v___uniq_65_ := or(shl(1, 64), 1)
                        let _t2 := mload(64)
                        mstore(64, add(_t2, mul(2, 32)))
                        mstore(_t2, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t2, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_65_))), 1))
                        let v___uniq_66_ := _t2
                        switch lean_obj_tag(v___uniq_66_)
                        case 0 {
                          let v___uniq_67_ := mload(add(v___uniq_66_, mul(1, 32)))
                          let v___uniq_68_ := f_Nat_sub(v___uniq_61_, v___uniq_3_)
                          sstore(shr(1, v___uniq_67_), shr(1, v___uniq_68_))
                          let v___uniq_69_ := or(shl(1, 0), 1)
                          let v___uniq_52_ := v___uniq_69_
                          switch lean_obj_tag(v___uniq_52_)
                          case 0 {
                            mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                            let v___uniq_53_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_53_)
                            case 0 {
                              let v___uniq_54_ := or(shl(1, 32), 1)
                              mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                              let v___uniq_55_ := or(shl(1, 0), 1)
                              switch lean_obj_tag(v___uniq_55_)
                              case 0 {
                                let v___uniq_56_ := or(shl(1, 64), 1)
                                let _t3 := mload(64)
                                mstore(64, add(_t3, mul(2, 32)))
                                mstore(_t3, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t3, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                                let v___uniq_57_ := _t3
                                switch lean_obj_tag(v___uniq_57_)
                                case 0 {
                                  let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                  let _t4 := mload(64)
                                  mstore(64, add(_t4, mul(2, 32)))
                                  mstore(_t4, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t4, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                  let v___uniq_59_ := _t4
                                  let v___uniq_25_ := v___uniq_59_
                                  switch lean_obj_tag(v___uniq_25_)
                                  case 0 {
                                    let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                    let v___uniq_27_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_27_)
                                    case 0 {
                                      let v___uniq_28_ := or(shl(1, 32), 1)
                                      mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                      let v___uniq_29_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_29_)
                                      case 0 {
                                        let v___uniq_30_ := or(shl(1, 64), 1)
                                        let _t5 := mload(64)
                                        mstore(64, add(_t5, mul(2, 32)))
                                        mstore(_t5, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t5, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                        let v___uniq_31_ := _t5
                                        switch lean_obj_tag(v___uniq_31_)
                                        case 0 {
                                          let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                          sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                          let v___uniq_34_ := or(shl(1, 0), 1)
                                          _ret := v___uniq_34_
                                          leave
                                        }
                                        case 1 {
                                          let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_42_ := 1
                                          switch lean_obj_tag(v___uniq_42_)
                                          case 0 {
                                            let v___uniq_36_ := v___uniq_31_
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t6 := mload(64)
                                              mstore(64, add(_t6, mul(2, 32)))
                                              mstore(_t6, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t6, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t6
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                          case 1 {
                                            let v___uniq_36_ := or(shl(1, 0), 1)
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t7 := mload(64)
                                              mstore(64, add(_t7, mul(2, 32)))
                                              mstore(_t7, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t7, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t7
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_29_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_27_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    let v___uniq_50_ := 1
                                    switch lean_obj_tag(v___uniq_50_)
                                    case 0 {
                                      let v___uniq_44_ := v___uniq_25_
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t8 := mload(64)
                                        mstore(64, add(_t8, mul(2, 32)))
                                        mstore(_t8, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t8, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t8
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_44_ := or(shl(1, 0), 1)
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t9 := mload(64)
                                        mstore(64, add(_t9, mul(2, 32)))
                                        mstore(_t9, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t9, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t9
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                  }
                                }
                                case 1 {
                                  let v___uniq_25_ := v___uniq_57_
                                  switch lean_obj_tag(v___uniq_25_)
                                  case 0 {
                                    let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                    let v___uniq_27_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_27_)
                                    case 0 {
                                      let v___uniq_28_ := or(shl(1, 32), 1)
                                      mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                      let v___uniq_29_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_29_)
                                      case 0 {
                                        let v___uniq_30_ := or(shl(1, 64), 1)
                                        let _t10 := mload(64)
                                        mstore(64, add(_t10, mul(2, 32)))
                                        mstore(_t10, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t10, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                        let v___uniq_31_ := _t10
                                        switch lean_obj_tag(v___uniq_31_)
                                        case 0 {
                                          let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                          sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                          let v___uniq_34_ := or(shl(1, 0), 1)
                                          _ret := v___uniq_34_
                                          leave
                                        }
                                        case 1 {
                                          let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_42_ := 1
                                          switch lean_obj_tag(v___uniq_42_)
                                          case 0 {
                                            let v___uniq_36_ := v___uniq_31_
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t11 := mload(64)
                                              mstore(64, add(_t11, mul(2, 32)))
                                              mstore(_t11, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t11, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t11
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                          case 1 {
                                            let v___uniq_36_ := or(shl(1, 0), 1)
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t12 := mload(64)
                                              mstore(64, add(_t12, mul(2, 32)))
                                              mstore(_t12, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t12, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t12
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_29_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_27_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    let v___uniq_50_ := 1
                                    switch lean_obj_tag(v___uniq_50_)
                                    case 0 {
                                      let v___uniq_44_ := v___uniq_25_
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t13 := mload(64)
                                        mstore(64, add(_t13, mul(2, 32)))
                                        mstore(_t13, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t13, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t13
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_44_ := or(shl(1, 0), 1)
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t14 := mload(64)
                                        mstore(64, add(_t14, mul(2, 32)))
                                        mstore(_t14, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t14, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t14
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                  }
                                }
                              }
                              case 1 {
                                _ret := v___uniq_55_
                                leave
                              }
                            }
                            case 1 {
                              _ret := v___uniq_53_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_52_
                            leave
                          }
                        }
                        case 1 {
                          let v___uniq_70_ := mload(add(v___uniq_66_, mul(1, 32)))
                          let v___uniq_77_ := 1
                          switch lean_obj_tag(v___uniq_77_)
                          case 0 {
                            let v___uniq_71_ := v___uniq_66_
                            let v___uniq_72_ := v___uniq_77_
                            switch lean_obj_tag(v___uniq_72_)
                            case 0 {
                              let v___uniq_73_ := v___uniq_71_
                              _ret := v___uniq_73_
                              leave
                            }
                            case 1 {
                              let _t15 := mload(64)
                              mstore(64, add(_t15, mul(2, 32)))
                              mstore(_t15, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t15, mul(1, 32)), v___uniq_70_)
                              let v___uniq_75_ := _t15
                              let v___uniq_73_ := v___uniq_75_
                              _ret := v___uniq_73_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_71_ := or(shl(1, 0), 1)
                            let v___uniq_72_ := v___uniq_77_
                            switch lean_obj_tag(v___uniq_72_)
                            case 0 {
                              let v___uniq_73_ := v___uniq_71_
                              _ret := v___uniq_73_
                              leave
                            }
                            case 1 {
                              let _t16 := mload(64)
                              mstore(64, add(_t16, mul(2, 32)))
                              mstore(_t16, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t16, mul(1, 32)), v___uniq_70_)
                              let v___uniq_75_ := _t16
                              let v___uniq_73_ := v___uniq_75_
                              _ret := v___uniq_73_
                              leave
                            }
                          }
                        }
                      }
                      case 1 {
                        let v___uniq_52_ := v___uniq_64_
                        switch lean_obj_tag(v___uniq_52_)
                        case 0 {
                          mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                          let v___uniq_53_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_53_)
                          case 0 {
                            let v___uniq_54_ := or(shl(1, 32), 1)
                            mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                            let v___uniq_55_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_55_)
                            case 0 {
                              let v___uniq_56_ := or(shl(1, 64), 1)
                              let _t17 := mload(64)
                              mstore(64, add(_t17, mul(2, 32)))
                              mstore(_t17, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t17, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                              let v___uniq_57_ := _t17
                              switch lean_obj_tag(v___uniq_57_)
                              case 0 {
                                let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                let _t18 := mload(64)
                                mstore(64, add(_t18, mul(2, 32)))
                                mstore(_t18, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t18, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                let v___uniq_59_ := _t18
                                let v___uniq_25_ := v___uniq_59_
                                switch lean_obj_tag(v___uniq_25_)
                                case 0 {
                                  let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                  let v___uniq_27_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_27_)
                                  case 0 {
                                    let v___uniq_28_ := or(shl(1, 32), 1)
                                    mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                    let v___uniq_29_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_29_)
                                    case 0 {
                                      let v___uniq_30_ := or(shl(1, 64), 1)
                                      let _t19 := mload(64)
                                      mstore(64, add(_t19, mul(2, 32)))
                                      mstore(_t19, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t19, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                      let v___uniq_31_ := _t19
                                      switch lean_obj_tag(v___uniq_31_)
                                      case 0 {
                                        let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                        sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                        let v___uniq_34_ := or(shl(1, 0), 1)
                                        _ret := v___uniq_34_
                                        leave
                                      }
                                      case 1 {
                                        let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_42_ := 1
                                        switch lean_obj_tag(v___uniq_42_)
                                        case 0 {
                                          let v___uniq_36_ := v___uniq_31_
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t20 := mload(64)
                                            mstore(64, add(_t20, mul(2, 32)))
                                            mstore(_t20, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t20, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t20
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                        case 1 {
                                          let v___uniq_36_ := or(shl(1, 0), 1)
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t21 := mload(64)
                                            mstore(64, add(_t21, mul(2, 32)))
                                            mstore(_t21, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t21, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t21
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_29_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_27_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  let v___uniq_50_ := 1
                                  switch lean_obj_tag(v___uniq_50_)
                                  case 0 {
                                    let v___uniq_44_ := v___uniq_25_
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t22 := mload(64)
                                      mstore(64, add(_t22, mul(2, 32)))
                                      mstore(_t22, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t22, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t22
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_44_ := or(shl(1, 0), 1)
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t23 := mload(64)
                                      mstore(64, add(_t23, mul(2, 32)))
                                      mstore(_t23, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t23, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t23
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                }
                              }
                              case 1 {
                                let v___uniq_25_ := v___uniq_57_
                                switch lean_obj_tag(v___uniq_25_)
                                case 0 {
                                  let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                  let v___uniq_27_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_27_)
                                  case 0 {
                                    let v___uniq_28_ := or(shl(1, 32), 1)
                                    mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                    let v___uniq_29_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_29_)
                                    case 0 {
                                      let v___uniq_30_ := or(shl(1, 64), 1)
                                      let _t24 := mload(64)
                                      mstore(64, add(_t24, mul(2, 32)))
                                      mstore(_t24, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t24, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                      let v___uniq_31_ := _t24
                                      switch lean_obj_tag(v___uniq_31_)
                                      case 0 {
                                        let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                        sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                        let v___uniq_34_ := or(shl(1, 0), 1)
                                        _ret := v___uniq_34_
                                        leave
                                      }
                                      case 1 {
                                        let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_42_ := 1
                                        switch lean_obj_tag(v___uniq_42_)
                                        case 0 {
                                          let v___uniq_36_ := v___uniq_31_
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t25 := mload(64)
                                            mstore(64, add(_t25, mul(2, 32)))
                                            mstore(_t25, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t25, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t25
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                        case 1 {
                                          let v___uniq_36_ := or(shl(1, 0), 1)
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t26 := mload(64)
                                            mstore(64, add(_t26, mul(2, 32)))
                                            mstore(_t26, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t26, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t26
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_29_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_27_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  let v___uniq_50_ := 1
                                  switch lean_obj_tag(v___uniq_50_)
                                  case 0 {
                                    let v___uniq_44_ := v___uniq_25_
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t27 := mload(64)
                                      mstore(64, add(_t27, mul(2, 32)))
                                      mstore(_t27, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t27, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t27
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_44_ := or(shl(1, 0), 1)
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t28 := mload(64)
                                      mstore(64, add(_t28, mul(2, 32)))
                                      mstore(_t28, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t28, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t28
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                }
                              }
                            }
                            case 1 {
                              _ret := v___uniq_55_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_53_
                            leave
                          }
                        }
                        case 1 {
                          _ret := v___uniq_52_
                          leave
                        }
                      }
                    }
                    case 1 {
                      let v___uniq_52_ := v___uniq_62_
                      switch lean_obj_tag(v___uniq_52_)
                      case 0 {
                        mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                        let v___uniq_53_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_53_)
                        case 0 {
                          let v___uniq_54_ := or(shl(1, 32), 1)
                          mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                          let v___uniq_55_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_55_)
                          case 0 {
                            let v___uniq_56_ := or(shl(1, 64), 1)
                            let _t29 := mload(64)
                            mstore(64, add(_t29, mul(2, 32)))
                            mstore(_t29, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t29, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                            let v___uniq_57_ := _t29
                            switch lean_obj_tag(v___uniq_57_)
                            case 0 {
                              let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                              let _t30 := mload(64)
                              mstore(64, add(_t30, mul(2, 32)))
                              mstore(_t30, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t30, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                              let v___uniq_59_ := _t30
                              let v___uniq_25_ := v___uniq_59_
                              switch lean_obj_tag(v___uniq_25_)
                              case 0 {
                                let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                let v___uniq_27_ := or(shl(1, 0), 1)
                                switch lean_obj_tag(v___uniq_27_)
                                case 0 {
                                  let v___uniq_28_ := or(shl(1, 32), 1)
                                  mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                  let v___uniq_29_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_29_)
                                  case 0 {
                                    let v___uniq_30_ := or(shl(1, 64), 1)
                                    let _t31 := mload(64)
                                    mstore(64, add(_t31, mul(2, 32)))
                                    mstore(_t31, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t31, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                    let v___uniq_31_ := _t31
                                    switch lean_obj_tag(v___uniq_31_)
                                    case 0 {
                                      let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                      let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                      sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                      let v___uniq_34_ := or(shl(1, 0), 1)
                                      _ret := v___uniq_34_
                                      leave
                                    }
                                    case 1 {
                                      let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                      let v___uniq_42_ := 1
                                      switch lean_obj_tag(v___uniq_42_)
                                      case 0 {
                                        let v___uniq_36_ := v___uniq_31_
                                        let v___uniq_37_ := v___uniq_42_
                                        switch lean_obj_tag(v___uniq_37_)
                                        case 0 {
                                          let v___uniq_38_ := v___uniq_36_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                        case 1 {
                                          let _t32 := mload(64)
                                          mstore(64, add(_t32, mul(2, 32)))
                                          mstore(_t32, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t32, mul(1, 32)), v___uniq_35_)
                                          let v___uniq_40_ := _t32
                                          let v___uniq_38_ := v___uniq_40_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        let v___uniq_36_ := or(shl(1, 0), 1)
                                        let v___uniq_37_ := v___uniq_42_
                                        switch lean_obj_tag(v___uniq_37_)
                                        case 0 {
                                          let v___uniq_38_ := v___uniq_36_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                        case 1 {
                                          let _t33 := mload(64)
                                          mstore(64, add(_t33, mul(2, 32)))
                                          mstore(_t33, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t33, mul(1, 32)), v___uniq_35_)
                                          let v___uniq_40_ := _t33
                                          let v___uniq_38_ := v___uniq_40_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                      }
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_29_
                                    leave
                                  }
                                }
                                case 1 {
                                  _ret := v___uniq_27_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                let v___uniq_50_ := 1
                                switch lean_obj_tag(v___uniq_50_)
                                case 0 {
                                  let v___uniq_44_ := v___uniq_25_
                                  let v___uniq_45_ := v___uniq_50_
                                  switch lean_obj_tag(v___uniq_45_)
                                  case 0 {
                                    let v___uniq_46_ := v___uniq_44_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                  case 1 {
                                    let _t34 := mload(64)
                                    mstore(64, add(_t34, mul(2, 32)))
                                    mstore(_t34, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t34, mul(1, 32)), v___uniq_43_)
                                    let v___uniq_48_ := _t34
                                    let v___uniq_46_ := v___uniq_48_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_44_ := or(shl(1, 0), 1)
                                  let v___uniq_45_ := v___uniq_50_
                                  switch lean_obj_tag(v___uniq_45_)
                                  case 0 {
                                    let v___uniq_46_ := v___uniq_44_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                  case 1 {
                                    let _t35 := mload(64)
                                    mstore(64, add(_t35, mul(2, 32)))
                                    mstore(_t35, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t35, mul(1, 32)), v___uniq_43_)
                                    let v___uniq_48_ := _t35
                                    let v___uniq_46_ := v___uniq_48_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                }
                              }
                            }
                            case 1 {
                              let v___uniq_25_ := v___uniq_57_
                              switch lean_obj_tag(v___uniq_25_)
                              case 0 {
                                let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                let v___uniq_27_ := or(shl(1, 0), 1)
                                switch lean_obj_tag(v___uniq_27_)
                                case 0 {
                                  let v___uniq_28_ := or(shl(1, 32), 1)
                                  mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                  let v___uniq_29_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_29_)
                                  case 0 {
                                    let v___uniq_30_ := or(shl(1, 64), 1)
                                    let _t36 := mload(64)
                                    mstore(64, add(_t36, mul(2, 32)))
                                    mstore(_t36, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t36, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                    let v___uniq_31_ := _t36
                                    switch lean_obj_tag(v___uniq_31_)
                                    case 0 {
                                      let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                      let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                      sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                      let v___uniq_34_ := or(shl(1, 0), 1)
                                      _ret := v___uniq_34_
                                      leave
                                    }
                                    case 1 {
                                      let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                      let v___uniq_42_ := 1
                                      switch lean_obj_tag(v___uniq_42_)
                                      case 0 {
                                        let v___uniq_36_ := v___uniq_31_
                                        let v___uniq_37_ := v___uniq_42_
                                        switch lean_obj_tag(v___uniq_37_)
                                        case 0 {
                                          let v___uniq_38_ := v___uniq_36_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                        case 1 {
                                          let _t37 := mload(64)
                                          mstore(64, add(_t37, mul(2, 32)))
                                          mstore(_t37, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t37, mul(1, 32)), v___uniq_35_)
                                          let v___uniq_40_ := _t37
                                          let v___uniq_38_ := v___uniq_40_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        let v___uniq_36_ := or(shl(1, 0), 1)
                                        let v___uniq_37_ := v___uniq_42_
                                        switch lean_obj_tag(v___uniq_37_)
                                        case 0 {
                                          let v___uniq_38_ := v___uniq_36_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                        case 1 {
                                          let _t38 := mload(64)
                                          mstore(64, add(_t38, mul(2, 32)))
                                          mstore(_t38, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t38, mul(1, 32)), v___uniq_35_)
                                          let v___uniq_40_ := _t38
                                          let v___uniq_38_ := v___uniq_40_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                      }
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_29_
                                    leave
                                  }
                                }
                                case 1 {
                                  _ret := v___uniq_27_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                let v___uniq_50_ := 1
                                switch lean_obj_tag(v___uniq_50_)
                                case 0 {
                                  let v___uniq_44_ := v___uniq_25_
                                  let v___uniq_45_ := v___uniq_50_
                                  switch lean_obj_tag(v___uniq_45_)
                                  case 0 {
                                    let v___uniq_46_ := v___uniq_44_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                  case 1 {
                                    let _t39 := mload(64)
                                    mstore(64, add(_t39, mul(2, 32)))
                                    mstore(_t39, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t39, mul(1, 32)), v___uniq_43_)
                                    let v___uniq_48_ := _t39
                                    let v___uniq_46_ := v___uniq_48_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_44_ := or(shl(1, 0), 1)
                                  let v___uniq_45_ := v___uniq_50_
                                  switch lean_obj_tag(v___uniq_45_)
                                  case 0 {
                                    let v___uniq_46_ := v___uniq_44_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                  case 1 {
                                    let _t40 := mload(64)
                                    mstore(64, add(_t40, mul(2, 32)))
                                    mstore(_t40, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t40, mul(1, 32)), v___uniq_43_)
                                    let v___uniq_48_ := _t40
                                    let v___uniq_46_ := v___uniq_48_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                }
                              }
                            }
                          }
                          case 1 {
                            _ret := v___uniq_55_
                            leave
                          }
                        }
                        case 1 {
                          _ret := v___uniq_53_
                          leave
                        }
                      }
                      case 1 {
                        _ret := v___uniq_52_
                        leave
                      }
                    }
                  }
                  case 1 {
                    revert(shr(1, v___uniq_20_), shr(1, v___uniq_20_))
                    revert(0, 0)
                    let v___uniq_82_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_82_)
                    case 0 {
                      let v___uniq_61_ := v___uniq_80_
                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                      let v___uniq_62_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_62_)
                      case 0 {
                        let v___uniq_63_ := or(shl(1, 32), 1)
                        mstore(shr(1, v___uniq_63_), shr(1, v___uniq_24_))
                        let v___uniq_64_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_64_)
                        case 0 {
                          let v___uniq_65_ := or(shl(1, 64), 1)
                          let _t41 := mload(64)
                          mstore(64, add(_t41, mul(2, 32)))
                          mstore(_t41, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t41, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_65_))), 1))
                          let v___uniq_66_ := _t41
                          switch lean_obj_tag(v___uniq_66_)
                          case 0 {
                            let v___uniq_67_ := mload(add(v___uniq_66_, mul(1, 32)))
                            let v___uniq_68_ := f_Nat_sub(v___uniq_61_, v___uniq_3_)
                            sstore(shr(1, v___uniq_67_), shr(1, v___uniq_68_))
                            let v___uniq_69_ := or(shl(1, 0), 1)
                            let v___uniq_52_ := v___uniq_69_
                            switch lean_obj_tag(v___uniq_52_)
                            case 0 {
                              mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                              let v___uniq_53_ := or(shl(1, 0), 1)
                              switch lean_obj_tag(v___uniq_53_)
                              case 0 {
                                let v___uniq_54_ := or(shl(1, 32), 1)
                                mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                                let v___uniq_55_ := or(shl(1, 0), 1)
                                switch lean_obj_tag(v___uniq_55_)
                                case 0 {
                                  let v___uniq_56_ := or(shl(1, 64), 1)
                                  let _t42 := mload(64)
                                  mstore(64, add(_t42, mul(2, 32)))
                                  mstore(_t42, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t42, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                                  let v___uniq_57_ := _t42
                                  switch lean_obj_tag(v___uniq_57_)
                                  case 0 {
                                    let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                    let _t43 := mload(64)
                                    mstore(64, add(_t43, mul(2, 32)))
                                    mstore(_t43, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t43, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                    let v___uniq_59_ := _t43
                                    let v___uniq_25_ := v___uniq_59_
                                    switch lean_obj_tag(v___uniq_25_)
                                    case 0 {
                                      let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                      let v___uniq_27_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_27_)
                                      case 0 {
                                        let v___uniq_28_ := or(shl(1, 32), 1)
                                        mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                        let v___uniq_29_ := or(shl(1, 0), 1)
                                        switch lean_obj_tag(v___uniq_29_)
                                        case 0 {
                                          let v___uniq_30_ := or(shl(1, 64), 1)
                                          let _t44 := mload(64)
                                          mstore(64, add(_t44, mul(2, 32)))
                                          mstore(_t44, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t44, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                          let v___uniq_31_ := _t44
                                          switch lean_obj_tag(v___uniq_31_)
                                          case 0 {
                                            let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                            let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                            sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                            let v___uniq_34_ := or(shl(1, 0), 1)
                                            _ret := v___uniq_34_
                                            leave
                                          }
                                          case 1 {
                                            let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                            let v___uniq_42_ := 1
                                            switch lean_obj_tag(v___uniq_42_)
                                            case 0 {
                                              let v___uniq_36_ := v___uniq_31_
                                              let v___uniq_37_ := v___uniq_42_
                                              switch lean_obj_tag(v___uniq_37_)
                                              case 0 {
                                                let v___uniq_38_ := v___uniq_36_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                              case 1 {
                                                let _t45 := mload(64)
                                                mstore(64, add(_t45, mul(2, 32)))
                                                mstore(_t45, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                                mstore(add(_t45, mul(1, 32)), v___uniq_35_)
                                                let v___uniq_40_ := _t45
                                                let v___uniq_38_ := v___uniq_40_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                            }
                                            case 1 {
                                              let v___uniq_36_ := or(shl(1, 0), 1)
                                              let v___uniq_37_ := v___uniq_42_
                                              switch lean_obj_tag(v___uniq_37_)
                                              case 0 {
                                                let v___uniq_38_ := v___uniq_36_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                              case 1 {
                                                let _t46 := mload(64)
                                                mstore(64, add(_t46, mul(2, 32)))
                                                mstore(_t46, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                                mstore(add(_t46, mul(1, 32)), v___uniq_35_)
                                                let v___uniq_40_ := _t46
                                                let v___uniq_38_ := v___uniq_40_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                            }
                                          }
                                        }
                                        case 1 {
                                          _ret := v___uniq_29_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_27_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                      let v___uniq_50_ := 1
                                      switch lean_obj_tag(v___uniq_50_)
                                      case 0 {
                                        let v___uniq_44_ := v___uniq_25_
                                        let v___uniq_45_ := v___uniq_50_
                                        switch lean_obj_tag(v___uniq_45_)
                                        case 0 {
                                          let v___uniq_46_ := v___uniq_44_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                        case 1 {
                                          let _t47 := mload(64)
                                          mstore(64, add(_t47, mul(2, 32)))
                                          mstore(_t47, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t47, mul(1, 32)), v___uniq_43_)
                                          let v___uniq_48_ := _t47
                                          let v___uniq_46_ := v___uniq_48_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        let v___uniq_44_ := or(shl(1, 0), 1)
                                        let v___uniq_45_ := v___uniq_50_
                                        switch lean_obj_tag(v___uniq_45_)
                                        case 0 {
                                          let v___uniq_46_ := v___uniq_44_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                        case 1 {
                                          let _t48 := mload(64)
                                          mstore(64, add(_t48, mul(2, 32)))
                                          mstore(_t48, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t48, mul(1, 32)), v___uniq_43_)
                                          let v___uniq_48_ := _t48
                                          let v___uniq_46_ := v___uniq_48_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                      }
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_25_ := v___uniq_57_
                                    switch lean_obj_tag(v___uniq_25_)
                                    case 0 {
                                      let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                      let v___uniq_27_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_27_)
                                      case 0 {
                                        let v___uniq_28_ := or(shl(1, 32), 1)
                                        mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                        let v___uniq_29_ := or(shl(1, 0), 1)
                                        switch lean_obj_tag(v___uniq_29_)
                                        case 0 {
                                          let v___uniq_30_ := or(shl(1, 64), 1)
                                          let _t49 := mload(64)
                                          mstore(64, add(_t49, mul(2, 32)))
                                          mstore(_t49, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t49, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                          let v___uniq_31_ := _t49
                                          switch lean_obj_tag(v___uniq_31_)
                                          case 0 {
                                            let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                            let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                            sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                            let v___uniq_34_ := or(shl(1, 0), 1)
                                            _ret := v___uniq_34_
                                            leave
                                          }
                                          case 1 {
                                            let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                            let v___uniq_42_ := 1
                                            switch lean_obj_tag(v___uniq_42_)
                                            case 0 {
                                              let v___uniq_36_ := v___uniq_31_
                                              let v___uniq_37_ := v___uniq_42_
                                              switch lean_obj_tag(v___uniq_37_)
                                              case 0 {
                                                let v___uniq_38_ := v___uniq_36_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                              case 1 {
                                                let _t50 := mload(64)
                                                mstore(64, add(_t50, mul(2, 32)))
                                                mstore(_t50, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                                mstore(add(_t50, mul(1, 32)), v___uniq_35_)
                                                let v___uniq_40_ := _t50
                                                let v___uniq_38_ := v___uniq_40_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                            }
                                            case 1 {
                                              let v___uniq_36_ := or(shl(1, 0), 1)
                                              let v___uniq_37_ := v___uniq_42_
                                              switch lean_obj_tag(v___uniq_37_)
                                              case 0 {
                                                let v___uniq_38_ := v___uniq_36_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                              case 1 {
                                                let _t51 := mload(64)
                                                mstore(64, add(_t51, mul(2, 32)))
                                                mstore(_t51, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                                mstore(add(_t51, mul(1, 32)), v___uniq_35_)
                                                let v___uniq_40_ := _t51
                                                let v___uniq_38_ := v___uniq_40_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                            }
                                          }
                                        }
                                        case 1 {
                                          _ret := v___uniq_29_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_27_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                      let v___uniq_50_ := 1
                                      switch lean_obj_tag(v___uniq_50_)
                                      case 0 {
                                        let v___uniq_44_ := v___uniq_25_
                                        let v___uniq_45_ := v___uniq_50_
                                        switch lean_obj_tag(v___uniq_45_)
                                        case 0 {
                                          let v___uniq_46_ := v___uniq_44_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                        case 1 {
                                          let _t52 := mload(64)
                                          mstore(64, add(_t52, mul(2, 32)))
                                          mstore(_t52, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t52, mul(1, 32)), v___uniq_43_)
                                          let v___uniq_48_ := _t52
                                          let v___uniq_46_ := v___uniq_48_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        let v___uniq_44_ := or(shl(1, 0), 1)
                                        let v___uniq_45_ := v___uniq_50_
                                        switch lean_obj_tag(v___uniq_45_)
                                        case 0 {
                                          let v___uniq_46_ := v___uniq_44_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                        case 1 {
                                          let _t53 := mload(64)
                                          mstore(64, add(_t53, mul(2, 32)))
                                          mstore(_t53, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t53, mul(1, 32)), v___uniq_43_)
                                          let v___uniq_48_ := _t53
                                          let v___uniq_46_ := v___uniq_48_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                      }
                                    }
                                  }
                                }
                                case 1 {
                                  _ret := v___uniq_55_
                                  leave
                                }
                              }
                              case 1 {
                                _ret := v___uniq_53_
                                leave
                              }
                            }
                            case 1 {
                              _ret := v___uniq_52_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_70_ := mload(add(v___uniq_66_, mul(1, 32)))
                            let v___uniq_77_ := 1
                            switch lean_obj_tag(v___uniq_77_)
                            case 0 {
                              let v___uniq_71_ := v___uniq_66_
                              let v___uniq_72_ := v___uniq_77_
                              switch lean_obj_tag(v___uniq_72_)
                              case 0 {
                                let v___uniq_73_ := v___uniq_71_
                                _ret := v___uniq_73_
                                leave
                              }
                              case 1 {
                                let _t54 := mload(64)
                                mstore(64, add(_t54, mul(2, 32)))
                                mstore(_t54, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t54, mul(1, 32)), v___uniq_70_)
                                let v___uniq_75_ := _t54
                                let v___uniq_73_ := v___uniq_75_
                                _ret := v___uniq_73_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_71_ := or(shl(1, 0), 1)
                              let v___uniq_72_ := v___uniq_77_
                              switch lean_obj_tag(v___uniq_72_)
                              case 0 {
                                let v___uniq_73_ := v___uniq_71_
                                _ret := v___uniq_73_
                                leave
                              }
                              case 1 {
                                let _t55 := mload(64)
                                mstore(64, add(_t55, mul(2, 32)))
                                mstore(_t55, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t55, mul(1, 32)), v___uniq_70_)
                                let v___uniq_75_ := _t55
                                let v___uniq_73_ := v___uniq_75_
                                _ret := v___uniq_73_
                                leave
                              }
                            }
                          }
                        }
                        case 1 {
                          let v___uniq_52_ := v___uniq_64_
                          switch lean_obj_tag(v___uniq_52_)
                          case 0 {
                            mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                            let v___uniq_53_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_53_)
                            case 0 {
                              let v___uniq_54_ := or(shl(1, 32), 1)
                              mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                              let v___uniq_55_ := or(shl(1, 0), 1)
                              switch lean_obj_tag(v___uniq_55_)
                              case 0 {
                                let v___uniq_56_ := or(shl(1, 64), 1)
                                let _t56 := mload(64)
                                mstore(64, add(_t56, mul(2, 32)))
                                mstore(_t56, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t56, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                                let v___uniq_57_ := _t56
                                switch lean_obj_tag(v___uniq_57_)
                                case 0 {
                                  let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                  let _t57 := mload(64)
                                  mstore(64, add(_t57, mul(2, 32)))
                                  mstore(_t57, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t57, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                  let v___uniq_59_ := _t57
                                  let v___uniq_25_ := v___uniq_59_
                                  switch lean_obj_tag(v___uniq_25_)
                                  case 0 {
                                    let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                    let v___uniq_27_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_27_)
                                    case 0 {
                                      let v___uniq_28_ := or(shl(1, 32), 1)
                                      mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                      let v___uniq_29_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_29_)
                                      case 0 {
                                        let v___uniq_30_ := or(shl(1, 64), 1)
                                        let _t58 := mload(64)
                                        mstore(64, add(_t58, mul(2, 32)))
                                        mstore(_t58, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t58, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                        let v___uniq_31_ := _t58
                                        switch lean_obj_tag(v___uniq_31_)
                                        case 0 {
                                          let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                          sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                          let v___uniq_34_ := or(shl(1, 0), 1)
                                          _ret := v___uniq_34_
                                          leave
                                        }
                                        case 1 {
                                          let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_42_ := 1
                                          switch lean_obj_tag(v___uniq_42_)
                                          case 0 {
                                            let v___uniq_36_ := v___uniq_31_
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t59 := mload(64)
                                              mstore(64, add(_t59, mul(2, 32)))
                                              mstore(_t59, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t59, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t59
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                          case 1 {
                                            let v___uniq_36_ := or(shl(1, 0), 1)
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t60 := mload(64)
                                              mstore(64, add(_t60, mul(2, 32)))
                                              mstore(_t60, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t60, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t60
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_29_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_27_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    let v___uniq_50_ := 1
                                    switch lean_obj_tag(v___uniq_50_)
                                    case 0 {
                                      let v___uniq_44_ := v___uniq_25_
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t61 := mload(64)
                                        mstore(64, add(_t61, mul(2, 32)))
                                        mstore(_t61, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t61, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t61
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_44_ := or(shl(1, 0), 1)
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t62 := mload(64)
                                        mstore(64, add(_t62, mul(2, 32)))
                                        mstore(_t62, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t62, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t62
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                  }
                                }
                                case 1 {
                                  let v___uniq_25_ := v___uniq_57_
                                  switch lean_obj_tag(v___uniq_25_)
                                  case 0 {
                                    let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                    let v___uniq_27_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_27_)
                                    case 0 {
                                      let v___uniq_28_ := or(shl(1, 32), 1)
                                      mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                      let v___uniq_29_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_29_)
                                      case 0 {
                                        let v___uniq_30_ := or(shl(1, 64), 1)
                                        let _t63 := mload(64)
                                        mstore(64, add(_t63, mul(2, 32)))
                                        mstore(_t63, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t63, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                        let v___uniq_31_ := _t63
                                        switch lean_obj_tag(v___uniq_31_)
                                        case 0 {
                                          let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                          sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                          let v___uniq_34_ := or(shl(1, 0), 1)
                                          _ret := v___uniq_34_
                                          leave
                                        }
                                        case 1 {
                                          let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_42_ := 1
                                          switch lean_obj_tag(v___uniq_42_)
                                          case 0 {
                                            let v___uniq_36_ := v___uniq_31_
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t64 := mload(64)
                                              mstore(64, add(_t64, mul(2, 32)))
                                              mstore(_t64, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t64, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t64
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                          case 1 {
                                            let v___uniq_36_ := or(shl(1, 0), 1)
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t65 := mload(64)
                                              mstore(64, add(_t65, mul(2, 32)))
                                              mstore(_t65, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t65, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t65
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_29_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_27_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    let v___uniq_50_ := 1
                                    switch lean_obj_tag(v___uniq_50_)
                                    case 0 {
                                      let v___uniq_44_ := v___uniq_25_
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t66 := mload(64)
                                        mstore(64, add(_t66, mul(2, 32)))
                                        mstore(_t66, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t66, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t66
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_44_ := or(shl(1, 0), 1)
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t67 := mload(64)
                                        mstore(64, add(_t67, mul(2, 32)))
                                        mstore(_t67, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t67, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t67
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                  }
                                }
                              }
                              case 1 {
                                _ret := v___uniq_55_
                                leave
                              }
                            }
                            case 1 {
                              _ret := v___uniq_53_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_52_
                            leave
                          }
                        }
                      }
                      case 1 {
                        let v___uniq_52_ := v___uniq_62_
                        switch lean_obj_tag(v___uniq_52_)
                        case 0 {
                          mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                          let v___uniq_53_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_53_)
                          case 0 {
                            let v___uniq_54_ := or(shl(1, 32), 1)
                            mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                            let v___uniq_55_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_55_)
                            case 0 {
                              let v___uniq_56_ := or(shl(1, 64), 1)
                              let _t68 := mload(64)
                              mstore(64, add(_t68, mul(2, 32)))
                              mstore(_t68, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t68, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                              let v___uniq_57_ := _t68
                              switch lean_obj_tag(v___uniq_57_)
                              case 0 {
                                let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                let _t69 := mload(64)
                                mstore(64, add(_t69, mul(2, 32)))
                                mstore(_t69, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t69, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                let v___uniq_59_ := _t69
                                let v___uniq_25_ := v___uniq_59_
                                switch lean_obj_tag(v___uniq_25_)
                                case 0 {
                                  let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                  let v___uniq_27_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_27_)
                                  case 0 {
                                    let v___uniq_28_ := or(shl(1, 32), 1)
                                    mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                    let v___uniq_29_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_29_)
                                    case 0 {
                                      let v___uniq_30_ := or(shl(1, 64), 1)
                                      let _t70 := mload(64)
                                      mstore(64, add(_t70, mul(2, 32)))
                                      mstore(_t70, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t70, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                      let v___uniq_31_ := _t70
                                      switch lean_obj_tag(v___uniq_31_)
                                      case 0 {
                                        let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                        sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                        let v___uniq_34_ := or(shl(1, 0), 1)
                                        _ret := v___uniq_34_
                                        leave
                                      }
                                      case 1 {
                                        let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_42_ := 1
                                        switch lean_obj_tag(v___uniq_42_)
                                        case 0 {
                                          let v___uniq_36_ := v___uniq_31_
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t71 := mload(64)
                                            mstore(64, add(_t71, mul(2, 32)))
                                            mstore(_t71, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t71, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t71
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                        case 1 {
                                          let v___uniq_36_ := or(shl(1, 0), 1)
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t72 := mload(64)
                                            mstore(64, add(_t72, mul(2, 32)))
                                            mstore(_t72, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t72, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t72
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_29_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_27_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  let v___uniq_50_ := 1
                                  switch lean_obj_tag(v___uniq_50_)
                                  case 0 {
                                    let v___uniq_44_ := v___uniq_25_
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t73 := mload(64)
                                      mstore(64, add(_t73, mul(2, 32)))
                                      mstore(_t73, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t73, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t73
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_44_ := or(shl(1, 0), 1)
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t74 := mload(64)
                                      mstore(64, add(_t74, mul(2, 32)))
                                      mstore(_t74, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t74, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t74
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                }
                              }
                              case 1 {
                                let v___uniq_25_ := v___uniq_57_
                                switch lean_obj_tag(v___uniq_25_)
                                case 0 {
                                  let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                  let v___uniq_27_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_27_)
                                  case 0 {
                                    let v___uniq_28_ := or(shl(1, 32), 1)
                                    mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                    let v___uniq_29_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_29_)
                                    case 0 {
                                      let v___uniq_30_ := or(shl(1, 64), 1)
                                      let _t75 := mload(64)
                                      mstore(64, add(_t75, mul(2, 32)))
                                      mstore(_t75, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t75, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                      let v___uniq_31_ := _t75
                                      switch lean_obj_tag(v___uniq_31_)
                                      case 0 {
                                        let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                        sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                        let v___uniq_34_ := or(shl(1, 0), 1)
                                        _ret := v___uniq_34_
                                        leave
                                      }
                                      case 1 {
                                        let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_42_ := 1
                                        switch lean_obj_tag(v___uniq_42_)
                                        case 0 {
                                          let v___uniq_36_ := v___uniq_31_
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t76 := mload(64)
                                            mstore(64, add(_t76, mul(2, 32)))
                                            mstore(_t76, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t76, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t76
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                        case 1 {
                                          let v___uniq_36_ := or(shl(1, 0), 1)
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t77 := mload(64)
                                            mstore(64, add(_t77, mul(2, 32)))
                                            mstore(_t77, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t77, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t77
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_29_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_27_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  let v___uniq_50_ := 1
                                  switch lean_obj_tag(v___uniq_50_)
                                  case 0 {
                                    let v___uniq_44_ := v___uniq_25_
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t78 := mload(64)
                                      mstore(64, add(_t78, mul(2, 32)))
                                      mstore(_t78, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t78, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t78
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_44_ := or(shl(1, 0), 1)
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t79 := mload(64)
                                      mstore(64, add(_t79, mul(2, 32)))
                                      mstore(_t79, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t79, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t79
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                }
                              }
                            }
                            case 1 {
                              _ret := v___uniq_55_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_53_
                            leave
                          }
                        }
                        case 1 {
                          _ret := v___uniq_52_
                          leave
                        }
                      }
                    }
                    case 1 {
                      _ret := v___uniq_82_
                      leave
                    }
                  }
                }
                case 1 {
                  let v___uniq_83_ := mload(add(v___uniq_79_, mul(1, 32)))
                  let v___uniq_90_ := 1
                  switch lean_obj_tag(v___uniq_90_)
                  case 0 {
                    let v___uniq_84_ := v___uniq_79_
                    let v___uniq_85_ := v___uniq_90_
                    switch lean_obj_tag(v___uniq_85_)
                    case 0 {
                      let v___uniq_86_ := v___uniq_84_
                      _ret := v___uniq_86_
                      leave
                    }
                    case 1 {
                      let _t80 := mload(64)
                      mstore(64, add(_t80, mul(2, 32)))
                      mstore(_t80, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t80, mul(1, 32)), v___uniq_83_)
                      let v___uniq_88_ := _t80
                      let v___uniq_86_ := v___uniq_88_
                      _ret := v___uniq_86_
                      leave
                    }
                  }
                  case 1 {
                    let v___uniq_84_ := or(shl(1, 0), 1)
                    let v___uniq_85_ := v___uniq_90_
                    switch lean_obj_tag(v___uniq_85_)
                    case 0 {
                      let v___uniq_86_ := v___uniq_84_
                      _ret := v___uniq_86_
                      leave
                    }
                    case 1 {
                      let _t81 := mload(64)
                      mstore(64, add(_t81, mul(2, 32)))
                      mstore(_t81, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t81, mul(1, 32)), v___uniq_83_)
                      let v___uniq_88_ := _t81
                      let v___uniq_86_ := v___uniq_88_
                      _ret := v___uniq_86_
                      leave
                    }
                  }
                }
              }
              case 1 {
                let v___uniq_79_ := v___uniq_95_
                switch lean_obj_tag(v___uniq_79_)
                case 0 {
                  let v___uniq_80_ := mload(add(v___uniq_79_, mul(1, 32)))
                  let v___uniq_81_ := f_Nat_decLt(v___uniq_80_, v___uniq_3_)
                  switch lean_obj_tag(v___uniq_81_)
                  case 0 {
                    let v___uniq_61_ := v___uniq_80_
                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                    let v___uniq_62_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_62_)
                    case 0 {
                      let v___uniq_63_ := or(shl(1, 32), 1)
                      mstore(shr(1, v___uniq_63_), shr(1, v___uniq_24_))
                      let v___uniq_64_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_64_)
                      case 0 {
                        let v___uniq_65_ := or(shl(1, 64), 1)
                        let _t82 := mload(64)
                        mstore(64, add(_t82, mul(2, 32)))
                        mstore(_t82, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t82, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_65_))), 1))
                        let v___uniq_66_ := _t82
                        switch lean_obj_tag(v___uniq_66_)
                        case 0 {
                          let v___uniq_67_ := mload(add(v___uniq_66_, mul(1, 32)))
                          let v___uniq_68_ := f_Nat_sub(v___uniq_61_, v___uniq_3_)
                          sstore(shr(1, v___uniq_67_), shr(1, v___uniq_68_))
                          let v___uniq_69_ := or(shl(1, 0), 1)
                          let v___uniq_52_ := v___uniq_69_
                          switch lean_obj_tag(v___uniq_52_)
                          case 0 {
                            mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                            let v___uniq_53_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_53_)
                            case 0 {
                              let v___uniq_54_ := or(shl(1, 32), 1)
                              mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                              let v___uniq_55_ := or(shl(1, 0), 1)
                              switch lean_obj_tag(v___uniq_55_)
                              case 0 {
                                let v___uniq_56_ := or(shl(1, 64), 1)
                                let _t83 := mload(64)
                                mstore(64, add(_t83, mul(2, 32)))
                                mstore(_t83, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t83, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                                let v___uniq_57_ := _t83
                                switch lean_obj_tag(v___uniq_57_)
                                case 0 {
                                  let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                  let _t84 := mload(64)
                                  mstore(64, add(_t84, mul(2, 32)))
                                  mstore(_t84, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t84, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                  let v___uniq_59_ := _t84
                                  let v___uniq_25_ := v___uniq_59_
                                  switch lean_obj_tag(v___uniq_25_)
                                  case 0 {
                                    let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                    let v___uniq_27_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_27_)
                                    case 0 {
                                      let v___uniq_28_ := or(shl(1, 32), 1)
                                      mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                      let v___uniq_29_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_29_)
                                      case 0 {
                                        let v___uniq_30_ := or(shl(1, 64), 1)
                                        let _t85 := mload(64)
                                        mstore(64, add(_t85, mul(2, 32)))
                                        mstore(_t85, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t85, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                        let v___uniq_31_ := _t85
                                        switch lean_obj_tag(v___uniq_31_)
                                        case 0 {
                                          let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                          sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                          let v___uniq_34_ := or(shl(1, 0), 1)
                                          _ret := v___uniq_34_
                                          leave
                                        }
                                        case 1 {
                                          let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_42_ := 1
                                          switch lean_obj_tag(v___uniq_42_)
                                          case 0 {
                                            let v___uniq_36_ := v___uniq_31_
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t86 := mload(64)
                                              mstore(64, add(_t86, mul(2, 32)))
                                              mstore(_t86, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t86, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t86
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                          case 1 {
                                            let v___uniq_36_ := or(shl(1, 0), 1)
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t87 := mload(64)
                                              mstore(64, add(_t87, mul(2, 32)))
                                              mstore(_t87, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t87, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t87
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_29_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_27_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    let v___uniq_50_ := 1
                                    switch lean_obj_tag(v___uniq_50_)
                                    case 0 {
                                      let v___uniq_44_ := v___uniq_25_
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t88 := mload(64)
                                        mstore(64, add(_t88, mul(2, 32)))
                                        mstore(_t88, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t88, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t88
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_44_ := or(shl(1, 0), 1)
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t89 := mload(64)
                                        mstore(64, add(_t89, mul(2, 32)))
                                        mstore(_t89, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t89, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t89
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                  }
                                }
                                case 1 {
                                  let v___uniq_25_ := v___uniq_57_
                                  switch lean_obj_tag(v___uniq_25_)
                                  case 0 {
                                    let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                    let v___uniq_27_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_27_)
                                    case 0 {
                                      let v___uniq_28_ := or(shl(1, 32), 1)
                                      mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                      let v___uniq_29_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_29_)
                                      case 0 {
                                        let v___uniq_30_ := or(shl(1, 64), 1)
                                        let _t90 := mload(64)
                                        mstore(64, add(_t90, mul(2, 32)))
                                        mstore(_t90, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t90, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                        let v___uniq_31_ := _t90
                                        switch lean_obj_tag(v___uniq_31_)
                                        case 0 {
                                          let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                          sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                          let v___uniq_34_ := or(shl(1, 0), 1)
                                          _ret := v___uniq_34_
                                          leave
                                        }
                                        case 1 {
                                          let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_42_ := 1
                                          switch lean_obj_tag(v___uniq_42_)
                                          case 0 {
                                            let v___uniq_36_ := v___uniq_31_
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t91 := mload(64)
                                              mstore(64, add(_t91, mul(2, 32)))
                                              mstore(_t91, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t91, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t91
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                          case 1 {
                                            let v___uniq_36_ := or(shl(1, 0), 1)
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t92 := mload(64)
                                              mstore(64, add(_t92, mul(2, 32)))
                                              mstore(_t92, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t92, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t92
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_29_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_27_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    let v___uniq_50_ := 1
                                    switch lean_obj_tag(v___uniq_50_)
                                    case 0 {
                                      let v___uniq_44_ := v___uniq_25_
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t93 := mload(64)
                                        mstore(64, add(_t93, mul(2, 32)))
                                        mstore(_t93, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t93, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t93
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_44_ := or(shl(1, 0), 1)
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t94 := mload(64)
                                        mstore(64, add(_t94, mul(2, 32)))
                                        mstore(_t94, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t94, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t94
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                  }
                                }
                              }
                              case 1 {
                                _ret := v___uniq_55_
                                leave
                              }
                            }
                            case 1 {
                              _ret := v___uniq_53_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_52_
                            leave
                          }
                        }
                        case 1 {
                          let v___uniq_70_ := mload(add(v___uniq_66_, mul(1, 32)))
                          let v___uniq_77_ := 1
                          switch lean_obj_tag(v___uniq_77_)
                          case 0 {
                            let v___uniq_71_ := v___uniq_66_
                            let v___uniq_72_ := v___uniq_77_
                            switch lean_obj_tag(v___uniq_72_)
                            case 0 {
                              let v___uniq_73_ := v___uniq_71_
                              _ret := v___uniq_73_
                              leave
                            }
                            case 1 {
                              let _t95 := mload(64)
                              mstore(64, add(_t95, mul(2, 32)))
                              mstore(_t95, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t95, mul(1, 32)), v___uniq_70_)
                              let v___uniq_75_ := _t95
                              let v___uniq_73_ := v___uniq_75_
                              _ret := v___uniq_73_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_71_ := or(shl(1, 0), 1)
                            let v___uniq_72_ := v___uniq_77_
                            switch lean_obj_tag(v___uniq_72_)
                            case 0 {
                              let v___uniq_73_ := v___uniq_71_
                              _ret := v___uniq_73_
                              leave
                            }
                            case 1 {
                              let _t96 := mload(64)
                              mstore(64, add(_t96, mul(2, 32)))
                              mstore(_t96, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t96, mul(1, 32)), v___uniq_70_)
                              let v___uniq_75_ := _t96
                              let v___uniq_73_ := v___uniq_75_
                              _ret := v___uniq_73_
                              leave
                            }
                          }
                        }
                      }
                      case 1 {
                        let v___uniq_52_ := v___uniq_64_
                        switch lean_obj_tag(v___uniq_52_)
                        case 0 {
                          mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                          let v___uniq_53_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_53_)
                          case 0 {
                            let v___uniq_54_ := or(shl(1, 32), 1)
                            mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                            let v___uniq_55_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_55_)
                            case 0 {
                              let v___uniq_56_ := or(shl(1, 64), 1)
                              let _t97 := mload(64)
                              mstore(64, add(_t97, mul(2, 32)))
                              mstore(_t97, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t97, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                              let v___uniq_57_ := _t97
                              switch lean_obj_tag(v___uniq_57_)
                              case 0 {
                                let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                let _t98 := mload(64)
                                mstore(64, add(_t98, mul(2, 32)))
                                mstore(_t98, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t98, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                let v___uniq_59_ := _t98
                                let v___uniq_25_ := v___uniq_59_
                                switch lean_obj_tag(v___uniq_25_)
                                case 0 {
                                  let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                  let v___uniq_27_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_27_)
                                  case 0 {
                                    let v___uniq_28_ := or(shl(1, 32), 1)
                                    mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                    let v___uniq_29_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_29_)
                                    case 0 {
                                      let v___uniq_30_ := or(shl(1, 64), 1)
                                      let _t99 := mload(64)
                                      mstore(64, add(_t99, mul(2, 32)))
                                      mstore(_t99, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t99, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                      let v___uniq_31_ := _t99
                                      switch lean_obj_tag(v___uniq_31_)
                                      case 0 {
                                        let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                        sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                        let v___uniq_34_ := or(shl(1, 0), 1)
                                        _ret := v___uniq_34_
                                        leave
                                      }
                                      case 1 {
                                        let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_42_ := 1
                                        switch lean_obj_tag(v___uniq_42_)
                                        case 0 {
                                          let v___uniq_36_ := v___uniq_31_
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t100 := mload(64)
                                            mstore(64, add(_t100, mul(2, 32)))
                                            mstore(_t100, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t100, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t100
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                        case 1 {
                                          let v___uniq_36_ := or(shl(1, 0), 1)
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t101 := mload(64)
                                            mstore(64, add(_t101, mul(2, 32)))
                                            mstore(_t101, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t101, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t101
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_29_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_27_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  let v___uniq_50_ := 1
                                  switch lean_obj_tag(v___uniq_50_)
                                  case 0 {
                                    let v___uniq_44_ := v___uniq_25_
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t102 := mload(64)
                                      mstore(64, add(_t102, mul(2, 32)))
                                      mstore(_t102, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t102, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t102
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_44_ := or(shl(1, 0), 1)
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t103 := mload(64)
                                      mstore(64, add(_t103, mul(2, 32)))
                                      mstore(_t103, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t103, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t103
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                }
                              }
                              case 1 {
                                let v___uniq_25_ := v___uniq_57_
                                switch lean_obj_tag(v___uniq_25_)
                                case 0 {
                                  let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                  let v___uniq_27_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_27_)
                                  case 0 {
                                    let v___uniq_28_ := or(shl(1, 32), 1)
                                    mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                    let v___uniq_29_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_29_)
                                    case 0 {
                                      let v___uniq_30_ := or(shl(1, 64), 1)
                                      let _t104 := mload(64)
                                      mstore(64, add(_t104, mul(2, 32)))
                                      mstore(_t104, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t104, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                      let v___uniq_31_ := _t104
                                      switch lean_obj_tag(v___uniq_31_)
                                      case 0 {
                                        let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                        sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                        let v___uniq_34_ := or(shl(1, 0), 1)
                                        _ret := v___uniq_34_
                                        leave
                                      }
                                      case 1 {
                                        let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_42_ := 1
                                        switch lean_obj_tag(v___uniq_42_)
                                        case 0 {
                                          let v___uniq_36_ := v___uniq_31_
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t105 := mload(64)
                                            mstore(64, add(_t105, mul(2, 32)))
                                            mstore(_t105, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t105, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t105
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                        case 1 {
                                          let v___uniq_36_ := or(shl(1, 0), 1)
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t106 := mload(64)
                                            mstore(64, add(_t106, mul(2, 32)))
                                            mstore(_t106, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t106, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t106
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_29_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_27_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  let v___uniq_50_ := 1
                                  switch lean_obj_tag(v___uniq_50_)
                                  case 0 {
                                    let v___uniq_44_ := v___uniq_25_
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t107 := mload(64)
                                      mstore(64, add(_t107, mul(2, 32)))
                                      mstore(_t107, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t107, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t107
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_44_ := or(shl(1, 0), 1)
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t108 := mload(64)
                                      mstore(64, add(_t108, mul(2, 32)))
                                      mstore(_t108, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t108, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t108
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                }
                              }
                            }
                            case 1 {
                              _ret := v___uniq_55_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_53_
                            leave
                          }
                        }
                        case 1 {
                          _ret := v___uniq_52_
                          leave
                        }
                      }
                    }
                    case 1 {
                      let v___uniq_52_ := v___uniq_62_
                      switch lean_obj_tag(v___uniq_52_)
                      case 0 {
                        mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                        let v___uniq_53_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_53_)
                        case 0 {
                          let v___uniq_54_ := or(shl(1, 32), 1)
                          mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                          let v___uniq_55_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_55_)
                          case 0 {
                            let v___uniq_56_ := or(shl(1, 64), 1)
                            let _t109 := mload(64)
                            mstore(64, add(_t109, mul(2, 32)))
                            mstore(_t109, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t109, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                            let v___uniq_57_ := _t109
                            switch lean_obj_tag(v___uniq_57_)
                            case 0 {
                              let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                              let _t110 := mload(64)
                              mstore(64, add(_t110, mul(2, 32)))
                              mstore(_t110, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t110, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                              let v___uniq_59_ := _t110
                              let v___uniq_25_ := v___uniq_59_
                              switch lean_obj_tag(v___uniq_25_)
                              case 0 {
                                let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                let v___uniq_27_ := or(shl(1, 0), 1)
                                switch lean_obj_tag(v___uniq_27_)
                                case 0 {
                                  let v___uniq_28_ := or(shl(1, 32), 1)
                                  mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                  let v___uniq_29_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_29_)
                                  case 0 {
                                    let v___uniq_30_ := or(shl(1, 64), 1)
                                    let _t111 := mload(64)
                                    mstore(64, add(_t111, mul(2, 32)))
                                    mstore(_t111, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t111, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                    let v___uniq_31_ := _t111
                                    switch lean_obj_tag(v___uniq_31_)
                                    case 0 {
                                      let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                      let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                      sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                      let v___uniq_34_ := or(shl(1, 0), 1)
                                      _ret := v___uniq_34_
                                      leave
                                    }
                                    case 1 {
                                      let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                      let v___uniq_42_ := 1
                                      switch lean_obj_tag(v___uniq_42_)
                                      case 0 {
                                        let v___uniq_36_ := v___uniq_31_
                                        let v___uniq_37_ := v___uniq_42_
                                        switch lean_obj_tag(v___uniq_37_)
                                        case 0 {
                                          let v___uniq_38_ := v___uniq_36_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                        case 1 {
                                          let _t112 := mload(64)
                                          mstore(64, add(_t112, mul(2, 32)))
                                          mstore(_t112, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t112, mul(1, 32)), v___uniq_35_)
                                          let v___uniq_40_ := _t112
                                          let v___uniq_38_ := v___uniq_40_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        let v___uniq_36_ := or(shl(1, 0), 1)
                                        let v___uniq_37_ := v___uniq_42_
                                        switch lean_obj_tag(v___uniq_37_)
                                        case 0 {
                                          let v___uniq_38_ := v___uniq_36_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                        case 1 {
                                          let _t113 := mload(64)
                                          mstore(64, add(_t113, mul(2, 32)))
                                          mstore(_t113, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t113, mul(1, 32)), v___uniq_35_)
                                          let v___uniq_40_ := _t113
                                          let v___uniq_38_ := v___uniq_40_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                      }
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_29_
                                    leave
                                  }
                                }
                                case 1 {
                                  _ret := v___uniq_27_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                let v___uniq_50_ := 1
                                switch lean_obj_tag(v___uniq_50_)
                                case 0 {
                                  let v___uniq_44_ := v___uniq_25_
                                  let v___uniq_45_ := v___uniq_50_
                                  switch lean_obj_tag(v___uniq_45_)
                                  case 0 {
                                    let v___uniq_46_ := v___uniq_44_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                  case 1 {
                                    let _t114 := mload(64)
                                    mstore(64, add(_t114, mul(2, 32)))
                                    mstore(_t114, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t114, mul(1, 32)), v___uniq_43_)
                                    let v___uniq_48_ := _t114
                                    let v___uniq_46_ := v___uniq_48_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_44_ := or(shl(1, 0), 1)
                                  let v___uniq_45_ := v___uniq_50_
                                  switch lean_obj_tag(v___uniq_45_)
                                  case 0 {
                                    let v___uniq_46_ := v___uniq_44_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                  case 1 {
                                    let _t115 := mload(64)
                                    mstore(64, add(_t115, mul(2, 32)))
                                    mstore(_t115, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t115, mul(1, 32)), v___uniq_43_)
                                    let v___uniq_48_ := _t115
                                    let v___uniq_46_ := v___uniq_48_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                }
                              }
                            }
                            case 1 {
                              let v___uniq_25_ := v___uniq_57_
                              switch lean_obj_tag(v___uniq_25_)
                              case 0 {
                                let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                let v___uniq_27_ := or(shl(1, 0), 1)
                                switch lean_obj_tag(v___uniq_27_)
                                case 0 {
                                  let v___uniq_28_ := or(shl(1, 32), 1)
                                  mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                  let v___uniq_29_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_29_)
                                  case 0 {
                                    let v___uniq_30_ := or(shl(1, 64), 1)
                                    let _t116 := mload(64)
                                    mstore(64, add(_t116, mul(2, 32)))
                                    mstore(_t116, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t116, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                    let v___uniq_31_ := _t116
                                    switch lean_obj_tag(v___uniq_31_)
                                    case 0 {
                                      let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                      let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                      sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                      let v___uniq_34_ := or(shl(1, 0), 1)
                                      _ret := v___uniq_34_
                                      leave
                                    }
                                    case 1 {
                                      let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                      let v___uniq_42_ := 1
                                      switch lean_obj_tag(v___uniq_42_)
                                      case 0 {
                                        let v___uniq_36_ := v___uniq_31_
                                        let v___uniq_37_ := v___uniq_42_
                                        switch lean_obj_tag(v___uniq_37_)
                                        case 0 {
                                          let v___uniq_38_ := v___uniq_36_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                        case 1 {
                                          let _t117 := mload(64)
                                          mstore(64, add(_t117, mul(2, 32)))
                                          mstore(_t117, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t117, mul(1, 32)), v___uniq_35_)
                                          let v___uniq_40_ := _t117
                                          let v___uniq_38_ := v___uniq_40_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        let v___uniq_36_ := or(shl(1, 0), 1)
                                        let v___uniq_37_ := v___uniq_42_
                                        switch lean_obj_tag(v___uniq_37_)
                                        case 0 {
                                          let v___uniq_38_ := v___uniq_36_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                        case 1 {
                                          let _t118 := mload(64)
                                          mstore(64, add(_t118, mul(2, 32)))
                                          mstore(_t118, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t118, mul(1, 32)), v___uniq_35_)
                                          let v___uniq_40_ := _t118
                                          let v___uniq_38_ := v___uniq_40_
                                          _ret := v___uniq_38_
                                          leave
                                        }
                                      }
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_29_
                                    leave
                                  }
                                }
                                case 1 {
                                  _ret := v___uniq_27_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                let v___uniq_50_ := 1
                                switch lean_obj_tag(v___uniq_50_)
                                case 0 {
                                  let v___uniq_44_ := v___uniq_25_
                                  let v___uniq_45_ := v___uniq_50_
                                  switch lean_obj_tag(v___uniq_45_)
                                  case 0 {
                                    let v___uniq_46_ := v___uniq_44_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                  case 1 {
                                    let _t119 := mload(64)
                                    mstore(64, add(_t119, mul(2, 32)))
                                    mstore(_t119, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t119, mul(1, 32)), v___uniq_43_)
                                    let v___uniq_48_ := _t119
                                    let v___uniq_46_ := v___uniq_48_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_44_ := or(shl(1, 0), 1)
                                  let v___uniq_45_ := v___uniq_50_
                                  switch lean_obj_tag(v___uniq_45_)
                                  case 0 {
                                    let v___uniq_46_ := v___uniq_44_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                  case 1 {
                                    let _t120 := mload(64)
                                    mstore(64, add(_t120, mul(2, 32)))
                                    mstore(_t120, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t120, mul(1, 32)), v___uniq_43_)
                                    let v___uniq_48_ := _t120
                                    let v___uniq_46_ := v___uniq_48_
                                    _ret := v___uniq_46_
                                    leave
                                  }
                                }
                              }
                            }
                          }
                          case 1 {
                            _ret := v___uniq_55_
                            leave
                          }
                        }
                        case 1 {
                          _ret := v___uniq_53_
                          leave
                        }
                      }
                      case 1 {
                        _ret := v___uniq_52_
                        leave
                      }
                    }
                  }
                  case 1 {
                    revert(shr(1, v___uniq_20_), shr(1, v___uniq_20_))
                    revert(0, 0)
                    let v___uniq_82_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_82_)
                    case 0 {
                      let v___uniq_61_ := v___uniq_80_
                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                      let v___uniq_62_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_62_)
                      case 0 {
                        let v___uniq_63_ := or(shl(1, 32), 1)
                        mstore(shr(1, v___uniq_63_), shr(1, v___uniq_24_))
                        let v___uniq_64_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_64_)
                        case 0 {
                          let v___uniq_65_ := or(shl(1, 64), 1)
                          let _t121 := mload(64)
                          mstore(64, add(_t121, mul(2, 32)))
                          mstore(_t121, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t121, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_65_))), 1))
                          let v___uniq_66_ := _t121
                          switch lean_obj_tag(v___uniq_66_)
                          case 0 {
                            let v___uniq_67_ := mload(add(v___uniq_66_, mul(1, 32)))
                            let v___uniq_68_ := f_Nat_sub(v___uniq_61_, v___uniq_3_)
                            sstore(shr(1, v___uniq_67_), shr(1, v___uniq_68_))
                            let v___uniq_69_ := or(shl(1, 0), 1)
                            let v___uniq_52_ := v___uniq_69_
                            switch lean_obj_tag(v___uniq_52_)
                            case 0 {
                              mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                              let v___uniq_53_ := or(shl(1, 0), 1)
                              switch lean_obj_tag(v___uniq_53_)
                              case 0 {
                                let v___uniq_54_ := or(shl(1, 32), 1)
                                mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                                let v___uniq_55_ := or(shl(1, 0), 1)
                                switch lean_obj_tag(v___uniq_55_)
                                case 0 {
                                  let v___uniq_56_ := or(shl(1, 64), 1)
                                  let _t122 := mload(64)
                                  mstore(64, add(_t122, mul(2, 32)))
                                  mstore(_t122, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t122, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                                  let v___uniq_57_ := _t122
                                  switch lean_obj_tag(v___uniq_57_)
                                  case 0 {
                                    let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                    let _t123 := mload(64)
                                    mstore(64, add(_t123, mul(2, 32)))
                                    mstore(_t123, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t123, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                    let v___uniq_59_ := _t123
                                    let v___uniq_25_ := v___uniq_59_
                                    switch lean_obj_tag(v___uniq_25_)
                                    case 0 {
                                      let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                      let v___uniq_27_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_27_)
                                      case 0 {
                                        let v___uniq_28_ := or(shl(1, 32), 1)
                                        mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                        let v___uniq_29_ := or(shl(1, 0), 1)
                                        switch lean_obj_tag(v___uniq_29_)
                                        case 0 {
                                          let v___uniq_30_ := or(shl(1, 64), 1)
                                          let _t124 := mload(64)
                                          mstore(64, add(_t124, mul(2, 32)))
                                          mstore(_t124, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t124, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                          let v___uniq_31_ := _t124
                                          switch lean_obj_tag(v___uniq_31_)
                                          case 0 {
                                            let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                            let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                            sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                            let v___uniq_34_ := or(shl(1, 0), 1)
                                            _ret := v___uniq_34_
                                            leave
                                          }
                                          case 1 {
                                            let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                            let v___uniq_42_ := 1
                                            switch lean_obj_tag(v___uniq_42_)
                                            case 0 {
                                              let v___uniq_36_ := v___uniq_31_
                                              let v___uniq_37_ := v___uniq_42_
                                              switch lean_obj_tag(v___uniq_37_)
                                              case 0 {
                                                let v___uniq_38_ := v___uniq_36_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                              case 1 {
                                                let _t125 := mload(64)
                                                mstore(64, add(_t125, mul(2, 32)))
                                                mstore(_t125, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                                mstore(add(_t125, mul(1, 32)), v___uniq_35_)
                                                let v___uniq_40_ := _t125
                                                let v___uniq_38_ := v___uniq_40_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                            }
                                            case 1 {
                                              let v___uniq_36_ := or(shl(1, 0), 1)
                                              let v___uniq_37_ := v___uniq_42_
                                              switch lean_obj_tag(v___uniq_37_)
                                              case 0 {
                                                let v___uniq_38_ := v___uniq_36_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                              case 1 {
                                                let _t126 := mload(64)
                                                mstore(64, add(_t126, mul(2, 32)))
                                                mstore(_t126, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                                mstore(add(_t126, mul(1, 32)), v___uniq_35_)
                                                let v___uniq_40_ := _t126
                                                let v___uniq_38_ := v___uniq_40_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                            }
                                          }
                                        }
                                        case 1 {
                                          _ret := v___uniq_29_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_27_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                      let v___uniq_50_ := 1
                                      switch lean_obj_tag(v___uniq_50_)
                                      case 0 {
                                        let v___uniq_44_ := v___uniq_25_
                                        let v___uniq_45_ := v___uniq_50_
                                        switch lean_obj_tag(v___uniq_45_)
                                        case 0 {
                                          let v___uniq_46_ := v___uniq_44_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                        case 1 {
                                          let _t127 := mload(64)
                                          mstore(64, add(_t127, mul(2, 32)))
                                          mstore(_t127, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t127, mul(1, 32)), v___uniq_43_)
                                          let v___uniq_48_ := _t127
                                          let v___uniq_46_ := v___uniq_48_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        let v___uniq_44_ := or(shl(1, 0), 1)
                                        let v___uniq_45_ := v___uniq_50_
                                        switch lean_obj_tag(v___uniq_45_)
                                        case 0 {
                                          let v___uniq_46_ := v___uniq_44_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                        case 1 {
                                          let _t128 := mload(64)
                                          mstore(64, add(_t128, mul(2, 32)))
                                          mstore(_t128, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t128, mul(1, 32)), v___uniq_43_)
                                          let v___uniq_48_ := _t128
                                          let v___uniq_46_ := v___uniq_48_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                      }
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_25_ := v___uniq_57_
                                    switch lean_obj_tag(v___uniq_25_)
                                    case 0 {
                                      let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                      let v___uniq_27_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_27_)
                                      case 0 {
                                        let v___uniq_28_ := or(shl(1, 32), 1)
                                        mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                        let v___uniq_29_ := or(shl(1, 0), 1)
                                        switch lean_obj_tag(v___uniq_29_)
                                        case 0 {
                                          let v___uniq_30_ := or(shl(1, 64), 1)
                                          let _t129 := mload(64)
                                          mstore(64, add(_t129, mul(2, 32)))
                                          mstore(_t129, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t129, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                          let v___uniq_31_ := _t129
                                          switch lean_obj_tag(v___uniq_31_)
                                          case 0 {
                                            let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                            let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                            sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                            let v___uniq_34_ := or(shl(1, 0), 1)
                                            _ret := v___uniq_34_
                                            leave
                                          }
                                          case 1 {
                                            let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                            let v___uniq_42_ := 1
                                            switch lean_obj_tag(v___uniq_42_)
                                            case 0 {
                                              let v___uniq_36_ := v___uniq_31_
                                              let v___uniq_37_ := v___uniq_42_
                                              switch lean_obj_tag(v___uniq_37_)
                                              case 0 {
                                                let v___uniq_38_ := v___uniq_36_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                              case 1 {
                                                let _t130 := mload(64)
                                                mstore(64, add(_t130, mul(2, 32)))
                                                mstore(_t130, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                                mstore(add(_t130, mul(1, 32)), v___uniq_35_)
                                                let v___uniq_40_ := _t130
                                                let v___uniq_38_ := v___uniq_40_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                            }
                                            case 1 {
                                              let v___uniq_36_ := or(shl(1, 0), 1)
                                              let v___uniq_37_ := v___uniq_42_
                                              switch lean_obj_tag(v___uniq_37_)
                                              case 0 {
                                                let v___uniq_38_ := v___uniq_36_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                              case 1 {
                                                let _t131 := mload(64)
                                                mstore(64, add(_t131, mul(2, 32)))
                                                mstore(_t131, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                                mstore(add(_t131, mul(1, 32)), v___uniq_35_)
                                                let v___uniq_40_ := _t131
                                                let v___uniq_38_ := v___uniq_40_
                                                _ret := v___uniq_38_
                                                leave
                                              }
                                            }
                                          }
                                        }
                                        case 1 {
                                          _ret := v___uniq_29_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_27_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                      let v___uniq_50_ := 1
                                      switch lean_obj_tag(v___uniq_50_)
                                      case 0 {
                                        let v___uniq_44_ := v___uniq_25_
                                        let v___uniq_45_ := v___uniq_50_
                                        switch lean_obj_tag(v___uniq_45_)
                                        case 0 {
                                          let v___uniq_46_ := v___uniq_44_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                        case 1 {
                                          let _t132 := mload(64)
                                          mstore(64, add(_t132, mul(2, 32)))
                                          mstore(_t132, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t132, mul(1, 32)), v___uniq_43_)
                                          let v___uniq_48_ := _t132
                                          let v___uniq_46_ := v___uniq_48_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                      }
                                      case 1 {
                                        let v___uniq_44_ := or(shl(1, 0), 1)
                                        let v___uniq_45_ := v___uniq_50_
                                        switch lean_obj_tag(v___uniq_45_)
                                        case 0 {
                                          let v___uniq_46_ := v___uniq_44_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                        case 1 {
                                          let _t133 := mload(64)
                                          mstore(64, add(_t133, mul(2, 32)))
                                          mstore(_t133, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                          mstore(add(_t133, mul(1, 32)), v___uniq_43_)
                                          let v___uniq_48_ := _t133
                                          let v___uniq_46_ := v___uniq_48_
                                          _ret := v___uniq_46_
                                          leave
                                        }
                                      }
                                    }
                                  }
                                }
                                case 1 {
                                  _ret := v___uniq_55_
                                  leave
                                }
                              }
                              case 1 {
                                _ret := v___uniq_53_
                                leave
                              }
                            }
                            case 1 {
                              _ret := v___uniq_52_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_70_ := mload(add(v___uniq_66_, mul(1, 32)))
                            let v___uniq_77_ := 1
                            switch lean_obj_tag(v___uniq_77_)
                            case 0 {
                              let v___uniq_71_ := v___uniq_66_
                              let v___uniq_72_ := v___uniq_77_
                              switch lean_obj_tag(v___uniq_72_)
                              case 0 {
                                let v___uniq_73_ := v___uniq_71_
                                _ret := v___uniq_73_
                                leave
                              }
                              case 1 {
                                let _t134 := mload(64)
                                mstore(64, add(_t134, mul(2, 32)))
                                mstore(_t134, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t134, mul(1, 32)), v___uniq_70_)
                                let v___uniq_75_ := _t134
                                let v___uniq_73_ := v___uniq_75_
                                _ret := v___uniq_73_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_71_ := or(shl(1, 0), 1)
                              let v___uniq_72_ := v___uniq_77_
                              switch lean_obj_tag(v___uniq_72_)
                              case 0 {
                                let v___uniq_73_ := v___uniq_71_
                                _ret := v___uniq_73_
                                leave
                              }
                              case 1 {
                                let _t135 := mload(64)
                                mstore(64, add(_t135, mul(2, 32)))
                                mstore(_t135, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t135, mul(1, 32)), v___uniq_70_)
                                let v___uniq_75_ := _t135
                                let v___uniq_73_ := v___uniq_75_
                                _ret := v___uniq_73_
                                leave
                              }
                            }
                          }
                        }
                        case 1 {
                          let v___uniq_52_ := v___uniq_64_
                          switch lean_obj_tag(v___uniq_52_)
                          case 0 {
                            mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                            let v___uniq_53_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_53_)
                            case 0 {
                              let v___uniq_54_ := or(shl(1, 32), 1)
                              mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                              let v___uniq_55_ := or(shl(1, 0), 1)
                              switch lean_obj_tag(v___uniq_55_)
                              case 0 {
                                let v___uniq_56_ := or(shl(1, 64), 1)
                                let _t136 := mload(64)
                                mstore(64, add(_t136, mul(2, 32)))
                                mstore(_t136, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t136, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                                let v___uniq_57_ := _t136
                                switch lean_obj_tag(v___uniq_57_)
                                case 0 {
                                  let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                  let _t137 := mload(64)
                                  mstore(64, add(_t137, mul(2, 32)))
                                  mstore(_t137, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t137, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                  let v___uniq_59_ := _t137
                                  let v___uniq_25_ := v___uniq_59_
                                  switch lean_obj_tag(v___uniq_25_)
                                  case 0 {
                                    let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                    let v___uniq_27_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_27_)
                                    case 0 {
                                      let v___uniq_28_ := or(shl(1, 32), 1)
                                      mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                      let v___uniq_29_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_29_)
                                      case 0 {
                                        let v___uniq_30_ := or(shl(1, 64), 1)
                                        let _t138 := mload(64)
                                        mstore(64, add(_t138, mul(2, 32)))
                                        mstore(_t138, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t138, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                        let v___uniq_31_ := _t138
                                        switch lean_obj_tag(v___uniq_31_)
                                        case 0 {
                                          let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                          sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                          let v___uniq_34_ := or(shl(1, 0), 1)
                                          _ret := v___uniq_34_
                                          leave
                                        }
                                        case 1 {
                                          let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_42_ := 1
                                          switch lean_obj_tag(v___uniq_42_)
                                          case 0 {
                                            let v___uniq_36_ := v___uniq_31_
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t139 := mload(64)
                                              mstore(64, add(_t139, mul(2, 32)))
                                              mstore(_t139, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t139, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t139
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                          case 1 {
                                            let v___uniq_36_ := or(shl(1, 0), 1)
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t140 := mload(64)
                                              mstore(64, add(_t140, mul(2, 32)))
                                              mstore(_t140, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t140, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t140
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_29_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_27_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    let v___uniq_50_ := 1
                                    switch lean_obj_tag(v___uniq_50_)
                                    case 0 {
                                      let v___uniq_44_ := v___uniq_25_
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t141 := mload(64)
                                        mstore(64, add(_t141, mul(2, 32)))
                                        mstore(_t141, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t141, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t141
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_44_ := or(shl(1, 0), 1)
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t142 := mload(64)
                                        mstore(64, add(_t142, mul(2, 32)))
                                        mstore(_t142, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t142, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t142
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                  }
                                }
                                case 1 {
                                  let v___uniq_25_ := v___uniq_57_
                                  switch lean_obj_tag(v___uniq_25_)
                                  case 0 {
                                    let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                    let v___uniq_27_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_27_)
                                    case 0 {
                                      let v___uniq_28_ := or(shl(1, 32), 1)
                                      mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                      let v___uniq_29_ := or(shl(1, 0), 1)
                                      switch lean_obj_tag(v___uniq_29_)
                                      case 0 {
                                        let v___uniq_30_ := or(shl(1, 64), 1)
                                        let _t143 := mload(64)
                                        mstore(64, add(_t143, mul(2, 32)))
                                        mstore(_t143, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t143, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                        let v___uniq_31_ := _t143
                                        switch lean_obj_tag(v___uniq_31_)
                                        case 0 {
                                          let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                          sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                          let v___uniq_34_ := or(shl(1, 0), 1)
                                          _ret := v___uniq_34_
                                          leave
                                        }
                                        case 1 {
                                          let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                          let v___uniq_42_ := 1
                                          switch lean_obj_tag(v___uniq_42_)
                                          case 0 {
                                            let v___uniq_36_ := v___uniq_31_
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t144 := mload(64)
                                              mstore(64, add(_t144, mul(2, 32)))
                                              mstore(_t144, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t144, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t144
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                          case 1 {
                                            let v___uniq_36_ := or(shl(1, 0), 1)
                                            let v___uniq_37_ := v___uniq_42_
                                            switch lean_obj_tag(v___uniq_37_)
                                            case 0 {
                                              let v___uniq_38_ := v___uniq_36_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                            case 1 {
                                              let _t145 := mload(64)
                                              mstore(64, add(_t145, mul(2, 32)))
                                              mstore(_t145, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                              mstore(add(_t145, mul(1, 32)), v___uniq_35_)
                                              let v___uniq_40_ := _t145
                                              let v___uniq_38_ := v___uniq_40_
                                              _ret := v___uniq_38_
                                              leave
                                            }
                                          }
                                        }
                                      }
                                      case 1 {
                                        _ret := v___uniq_29_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_27_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                    let v___uniq_50_ := 1
                                    switch lean_obj_tag(v___uniq_50_)
                                    case 0 {
                                      let v___uniq_44_ := v___uniq_25_
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t146 := mload(64)
                                        mstore(64, add(_t146, mul(2, 32)))
                                        mstore(_t146, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t146, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t146
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_44_ := or(shl(1, 0), 1)
                                      let v___uniq_45_ := v___uniq_50_
                                      switch lean_obj_tag(v___uniq_45_)
                                      case 0 {
                                        let v___uniq_46_ := v___uniq_44_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                      case 1 {
                                        let _t147 := mload(64)
                                        mstore(64, add(_t147, mul(2, 32)))
                                        mstore(_t147, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t147, mul(1, 32)), v___uniq_43_)
                                        let v___uniq_48_ := _t147
                                        let v___uniq_46_ := v___uniq_48_
                                        _ret := v___uniq_46_
                                        leave
                                      }
                                    }
                                  }
                                }
                              }
                              case 1 {
                                _ret := v___uniq_55_
                                leave
                              }
                            }
                            case 1 {
                              _ret := v___uniq_53_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_52_
                            leave
                          }
                        }
                      }
                      case 1 {
                        let v___uniq_52_ := v___uniq_62_
                        switch lean_obj_tag(v___uniq_52_)
                        case 0 {
                          mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                          let v___uniq_53_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_53_)
                          case 0 {
                            let v___uniq_54_ := or(shl(1, 32), 1)
                            mstore(shr(1, v___uniq_54_), shr(1, v___uniq_24_))
                            let v___uniq_55_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_55_)
                            case 0 {
                              let v___uniq_56_ := or(shl(1, 64), 1)
                              let _t148 := mload(64)
                              mstore(64, add(_t148, mul(2, 32)))
                              mstore(_t148, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t148, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_56_))), 1))
                              let v___uniq_57_ := _t148
                              switch lean_obj_tag(v___uniq_57_)
                              case 0 {
                                let v___uniq_58_ := mload(add(v___uniq_57_, mul(1, 32)))
                                let _t149 := mload(64)
                                mstore(64, add(_t149, mul(2, 32)))
                                mstore(_t149, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t149, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_58_))), 1))
                                let v___uniq_59_ := _t149
                                let v___uniq_25_ := v___uniq_59_
                                switch lean_obj_tag(v___uniq_25_)
                                case 0 {
                                  let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                  let v___uniq_27_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_27_)
                                  case 0 {
                                    let v___uniq_28_ := or(shl(1, 32), 1)
                                    mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                    let v___uniq_29_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_29_)
                                    case 0 {
                                      let v___uniq_30_ := or(shl(1, 64), 1)
                                      let _t150 := mload(64)
                                      mstore(64, add(_t150, mul(2, 32)))
                                      mstore(_t150, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t150, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                      let v___uniq_31_ := _t150
                                      switch lean_obj_tag(v___uniq_31_)
                                      case 0 {
                                        let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                        sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                        let v___uniq_34_ := or(shl(1, 0), 1)
                                        _ret := v___uniq_34_
                                        leave
                                      }
                                      case 1 {
                                        let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_42_ := 1
                                        switch lean_obj_tag(v___uniq_42_)
                                        case 0 {
                                          let v___uniq_36_ := v___uniq_31_
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t151 := mload(64)
                                            mstore(64, add(_t151, mul(2, 32)))
                                            mstore(_t151, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t151, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t151
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                        case 1 {
                                          let v___uniq_36_ := or(shl(1, 0), 1)
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t152 := mload(64)
                                            mstore(64, add(_t152, mul(2, 32)))
                                            mstore(_t152, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t152, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t152
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_29_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_27_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  let v___uniq_50_ := 1
                                  switch lean_obj_tag(v___uniq_50_)
                                  case 0 {
                                    let v___uniq_44_ := v___uniq_25_
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t153 := mload(64)
                                      mstore(64, add(_t153, mul(2, 32)))
                                      mstore(_t153, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t153, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t153
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_44_ := or(shl(1, 0), 1)
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t154 := mload(64)
                                      mstore(64, add(_t154, mul(2, 32)))
                                      mstore(_t154, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t154, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t154
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                }
                              }
                              case 1 {
                                let v___uniq_25_ := v___uniq_57_
                                switch lean_obj_tag(v___uniq_25_)
                                case 0 {
                                  let v___uniq_26_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                                  let v___uniq_27_ := or(shl(1, 0), 1)
                                  switch lean_obj_tag(v___uniq_27_)
                                  case 0 {
                                    let v___uniq_28_ := or(shl(1, 32), 1)
                                    mstore(shr(1, v___uniq_28_), shr(1, v___uniq_24_))
                                    let v___uniq_29_ := or(shl(1, 0), 1)
                                    switch lean_obj_tag(v___uniq_29_)
                                    case 0 {
                                      let v___uniq_30_ := or(shl(1, 64), 1)
                                      let _t155 := mload(64)
                                      mstore(64, add(_t155, mul(2, 32)))
                                      mstore(_t155, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t155, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_30_))), 1))
                                      let v___uniq_31_ := _t155
                                      switch lean_obj_tag(v___uniq_31_)
                                      case 0 {
                                        let v___uniq_32_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_33_ := f_Nat_add(v___uniq_26_, v___uniq_3_)
                                        sstore(shr(1, v___uniq_32_), shr(1, v___uniq_33_))
                                        let v___uniq_34_ := or(shl(1, 0), 1)
                                        _ret := v___uniq_34_
                                        leave
                                      }
                                      case 1 {
                                        let v___uniq_35_ := mload(add(v___uniq_31_, mul(1, 32)))
                                        let v___uniq_42_ := 1
                                        switch lean_obj_tag(v___uniq_42_)
                                        case 0 {
                                          let v___uniq_36_ := v___uniq_31_
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t156 := mload(64)
                                            mstore(64, add(_t156, mul(2, 32)))
                                            mstore(_t156, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t156, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t156
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                        case 1 {
                                          let v___uniq_36_ := or(shl(1, 0), 1)
                                          let v___uniq_37_ := v___uniq_42_
                                          switch lean_obj_tag(v___uniq_37_)
                                          case 0 {
                                            let v___uniq_38_ := v___uniq_36_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                          case 1 {
                                            let _t157 := mload(64)
                                            mstore(64, add(_t157, mul(2, 32)))
                                            mstore(_t157, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                            mstore(add(_t157, mul(1, 32)), v___uniq_35_)
                                            let v___uniq_40_ := _t157
                                            let v___uniq_38_ := v___uniq_40_
                                            _ret := v___uniq_38_
                                            leave
                                          }
                                        }
                                      }
                                    }
                                    case 1 {
                                      _ret := v___uniq_29_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    _ret := v___uniq_27_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_43_ := mload(add(v___uniq_25_, mul(1, 32)))
                                  let v___uniq_50_ := 1
                                  switch lean_obj_tag(v___uniq_50_)
                                  case 0 {
                                    let v___uniq_44_ := v___uniq_25_
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t158 := mload(64)
                                      mstore(64, add(_t158, mul(2, 32)))
                                      mstore(_t158, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t158, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t158
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_44_ := or(shl(1, 0), 1)
                                    let v___uniq_45_ := v___uniq_50_
                                    switch lean_obj_tag(v___uniq_45_)
                                    case 0 {
                                      let v___uniq_46_ := v___uniq_44_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                    case 1 {
                                      let _t159 := mload(64)
                                      mstore(64, add(_t159, mul(2, 32)))
                                      mstore(_t159, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t159, mul(1, 32)), v___uniq_43_)
                                      let v___uniq_48_ := _t159
                                      let v___uniq_46_ := v___uniq_48_
                                      _ret := v___uniq_46_
                                      leave
                                    }
                                  }
                                }
                              }
                            }
                            case 1 {
                              _ret := v___uniq_55_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_53_
                            leave
                          }
                        }
                        case 1 {
                          _ret := v___uniq_52_
                          leave
                        }
                      }
                    }
                    case 1 {
                      _ret := v___uniq_82_
                      leave
                    }
                  }
                }
                case 1 {
                  let v___uniq_83_ := mload(add(v___uniq_79_, mul(1, 32)))
                  let v___uniq_90_ := 1
                  switch lean_obj_tag(v___uniq_90_)
                  case 0 {
                    let v___uniq_84_ := v___uniq_79_
                    let v___uniq_85_ := v___uniq_90_
                    switch lean_obj_tag(v___uniq_85_)
                    case 0 {
                      let v___uniq_86_ := v___uniq_84_
                      _ret := v___uniq_86_
                      leave
                    }
                    case 1 {
                      let _t160 := mload(64)
                      mstore(64, add(_t160, mul(2, 32)))
                      mstore(_t160, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t160, mul(1, 32)), v___uniq_83_)
                      let v___uniq_88_ := _t160
                      let v___uniq_86_ := v___uniq_88_
                      _ret := v___uniq_86_
                      leave
                    }
                  }
                  case 1 {
                    let v___uniq_84_ := or(shl(1, 0), 1)
                    let v___uniq_85_ := v___uniq_90_
                    switch lean_obj_tag(v___uniq_85_)
                    case 0 {
                      let v___uniq_86_ := v___uniq_84_
                      _ret := v___uniq_86_
                      leave
                    }
                    case 1 {
                      let _t161 := mload(64)
                      mstore(64, add(_t161, mul(2, 32)))
                      mstore(_t161, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t161, mul(1, 32)), v___uniq_83_)
                      let v___uniq_88_ := _t161
                      let v___uniq_86_ := v___uniq_88_
                      _ret := v___uniq_86_
                      leave
                    }
                  }
                }
              }
            }
            case 1 {
              _ret := v___uniq_93_
              leave
            }
          }
          case 1 {
            _ret := v___uniq_23_
            leave
          }
        }
        case 1 {
          mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
          let v___uniq_98_ := or(shl(1, 0), 1)
          switch lean_obj_tag(v___uniq_98_)
          case 0 {
            let v___uniq_99_ := or(shl(1, 1), 1)
            let v___uniq_131_ := or(shl(1, 32), 1)
            mstore(shr(1, v___uniq_131_), shr(1, v___uniq_99_))
            let v___uniq_132_ := or(shl(1, 0), 1)
            switch lean_obj_tag(v___uniq_132_)
            case 0 {
              let v___uniq_133_ := or(shl(1, 64), 1)
              let _t162 := mload(64)
              mstore(64, add(_t162, mul(2, 32)))
              mstore(_t162, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t162, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_133_))), 1))
              let v___uniq_134_ := _t162
              switch lean_obj_tag(v___uniq_134_)
              case 0 {
                let v___uniq_135_ := mload(add(v___uniq_134_, mul(1, 32)))
                let _t163 := mload(64)
                mstore(64, add(_t163, mul(2, 32)))
                mstore(_t163, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                mstore(add(_t163, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_135_))), 1))
                let v___uniq_136_ := _t163
                let v___uniq_118_ := v___uniq_136_
                switch lean_obj_tag(v___uniq_118_)
                case 0 {
                  let v___uniq_119_ := mload(add(v___uniq_118_, mul(1, 32)))
                  let v___uniq_120_ := f_Nat_decLt(v___uniq_119_, v___uniq_3_)
                  switch lean_obj_tag(v___uniq_120_)
                  case 0 {
                    let v___uniq_100_ := v___uniq_119_
                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                    let v___uniq_101_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_101_)
                    case 0 {
                      let v___uniq_102_ := or(shl(1, 32), 1)
                      mstore(shr(1, v___uniq_102_), shr(1, v___uniq_99_))
                      let v___uniq_103_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_103_)
                      case 0 {
                        let v___uniq_104_ := or(shl(1, 64), 1)
                        let _t164 := mload(64)
                        mstore(64, add(_t164, mul(2, 32)))
                        mstore(_t164, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t164, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_104_))), 1))
                        let v___uniq_105_ := _t164
                        switch lean_obj_tag(v___uniq_105_)
                        case 0 {
                          let v___uniq_106_ := mload(add(v___uniq_105_, mul(1, 32)))
                          let v___uniq_107_ := f_Nat_sub(v___uniq_100_, v___uniq_3_)
                          sstore(shr(1, v___uniq_106_), shr(1, v___uniq_107_))
                          let v___uniq_108_ := or(shl(1, 0), 1)
                          let v___uniq_5_ := v___uniq_108_
                          switch lean_obj_tag(v___uniq_5_)
                          case 0 {
                            let v___uniq_6_ := or(shl(1, 0), 1)
                            let _t165 := mload(64)
                            mstore(64, add(_t165, mul(2, 32)))
                            mstore(_t165, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t165, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                            let v___uniq_7_ := _t165
                            switch lean_obj_tag(v___uniq_7_)
                            case 0 {
                              let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                              let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                              sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                              let v___uniq_10_ := or(shl(1, 0), 1)
                              _ret := v___uniq_10_
                              leave
                            }
                            case 1 {
                              let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                              let v___uniq_18_ := 1
                              switch lean_obj_tag(v___uniq_18_)
                              case 0 {
                                let v___uniq_12_ := v___uniq_7_
                                let v___uniq_13_ := v___uniq_18_
                                switch lean_obj_tag(v___uniq_13_)
                                case 0 {
                                  let v___uniq_14_ := v___uniq_12_
                                  _ret := v___uniq_14_
                                  leave
                                }
                                case 1 {
                                  let _t166 := mload(64)
                                  mstore(64, add(_t166, mul(2, 32)))
                                  mstore(_t166, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t166, mul(1, 32)), v___uniq_11_)
                                  let v___uniq_16_ := _t166
                                  let v___uniq_14_ := v___uniq_16_
                                  _ret := v___uniq_14_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_12_ := or(shl(1, 0), 1)
                                let v___uniq_13_ := v___uniq_18_
                                switch lean_obj_tag(v___uniq_13_)
                                case 0 {
                                  let v___uniq_14_ := v___uniq_12_
                                  _ret := v___uniq_14_
                                  leave
                                }
                                case 1 {
                                  let _t167 := mload(64)
                                  mstore(64, add(_t167, mul(2, 32)))
                                  mstore(_t167, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t167, mul(1, 32)), v___uniq_11_)
                                  let v___uniq_16_ := _t167
                                  let v___uniq_14_ := v___uniq_16_
                                  _ret := v___uniq_14_
                                  leave
                                }
                              }
                            }
                          }
                          case 1 {
                            _ret := v___uniq_5_
                            leave
                          }
                        }
                        case 1 {
                          let v___uniq_109_ := mload(add(v___uniq_105_, mul(1, 32)))
                          let v___uniq_116_ := 1
                          switch lean_obj_tag(v___uniq_116_)
                          case 0 {
                            let v___uniq_110_ := v___uniq_105_
                            let v___uniq_111_ := v___uniq_116_
                            switch lean_obj_tag(v___uniq_111_)
                            case 0 {
                              let v___uniq_112_ := v___uniq_110_
                              _ret := v___uniq_112_
                              leave
                            }
                            case 1 {
                              let _t168 := mload(64)
                              mstore(64, add(_t168, mul(2, 32)))
                              mstore(_t168, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t168, mul(1, 32)), v___uniq_109_)
                              let v___uniq_114_ := _t168
                              let v___uniq_112_ := v___uniq_114_
                              _ret := v___uniq_112_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_110_ := or(shl(1, 0), 1)
                            let v___uniq_111_ := v___uniq_116_
                            switch lean_obj_tag(v___uniq_111_)
                            case 0 {
                              let v___uniq_112_ := v___uniq_110_
                              _ret := v___uniq_112_
                              leave
                            }
                            case 1 {
                              let _t169 := mload(64)
                              mstore(64, add(_t169, mul(2, 32)))
                              mstore(_t169, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t169, mul(1, 32)), v___uniq_109_)
                              let v___uniq_114_ := _t169
                              let v___uniq_112_ := v___uniq_114_
                              _ret := v___uniq_112_
                              leave
                            }
                          }
                        }
                      }
                      case 1 {
                        let v___uniq_5_ := v___uniq_103_
                        switch lean_obj_tag(v___uniq_5_)
                        case 0 {
                          let v___uniq_6_ := or(shl(1, 0), 1)
                          let _t170 := mload(64)
                          mstore(64, add(_t170, mul(2, 32)))
                          mstore(_t170, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t170, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                          let v___uniq_7_ := _t170
                          switch lean_obj_tag(v___uniq_7_)
                          case 0 {
                            let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                            let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                            sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                            let v___uniq_10_ := or(shl(1, 0), 1)
                            _ret := v___uniq_10_
                            leave
                          }
                          case 1 {
                            let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                            let v___uniq_18_ := 1
                            switch lean_obj_tag(v___uniq_18_)
                            case 0 {
                              let v___uniq_12_ := v___uniq_7_
                              let v___uniq_13_ := v___uniq_18_
                              switch lean_obj_tag(v___uniq_13_)
                              case 0 {
                                let v___uniq_14_ := v___uniq_12_
                                _ret := v___uniq_14_
                                leave
                              }
                              case 1 {
                                let _t171 := mload(64)
                                mstore(64, add(_t171, mul(2, 32)))
                                mstore(_t171, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t171, mul(1, 32)), v___uniq_11_)
                                let v___uniq_16_ := _t171
                                let v___uniq_14_ := v___uniq_16_
                                _ret := v___uniq_14_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_12_ := or(shl(1, 0), 1)
                              let v___uniq_13_ := v___uniq_18_
                              switch lean_obj_tag(v___uniq_13_)
                              case 0 {
                                let v___uniq_14_ := v___uniq_12_
                                _ret := v___uniq_14_
                                leave
                              }
                              case 1 {
                                let _t172 := mload(64)
                                mstore(64, add(_t172, mul(2, 32)))
                                mstore(_t172, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t172, mul(1, 32)), v___uniq_11_)
                                let v___uniq_16_ := _t172
                                let v___uniq_14_ := v___uniq_16_
                                _ret := v___uniq_14_
                                leave
                              }
                            }
                          }
                        }
                        case 1 {
                          _ret := v___uniq_5_
                          leave
                        }
                      }
                    }
                    case 1 {
                      let v___uniq_5_ := v___uniq_101_
                      switch lean_obj_tag(v___uniq_5_)
                      case 0 {
                        let v___uniq_6_ := or(shl(1, 0), 1)
                        let _t173 := mload(64)
                        mstore(64, add(_t173, mul(2, 32)))
                        mstore(_t173, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t173, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                        let v___uniq_7_ := _t173
                        switch lean_obj_tag(v___uniq_7_)
                        case 0 {
                          let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                          let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                          sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                          let v___uniq_10_ := or(shl(1, 0), 1)
                          _ret := v___uniq_10_
                          leave
                        }
                        case 1 {
                          let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                          let v___uniq_18_ := 1
                          switch lean_obj_tag(v___uniq_18_)
                          case 0 {
                            let v___uniq_12_ := v___uniq_7_
                            let v___uniq_13_ := v___uniq_18_
                            switch lean_obj_tag(v___uniq_13_)
                            case 0 {
                              let v___uniq_14_ := v___uniq_12_
                              _ret := v___uniq_14_
                              leave
                            }
                            case 1 {
                              let _t174 := mload(64)
                              mstore(64, add(_t174, mul(2, 32)))
                              mstore(_t174, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t174, mul(1, 32)), v___uniq_11_)
                              let v___uniq_16_ := _t174
                              let v___uniq_14_ := v___uniq_16_
                              _ret := v___uniq_14_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_12_ := or(shl(1, 0), 1)
                            let v___uniq_13_ := v___uniq_18_
                            switch lean_obj_tag(v___uniq_13_)
                            case 0 {
                              let v___uniq_14_ := v___uniq_12_
                              _ret := v___uniq_14_
                              leave
                            }
                            case 1 {
                              let _t175 := mload(64)
                              mstore(64, add(_t175, mul(2, 32)))
                              mstore(_t175, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t175, mul(1, 32)), v___uniq_11_)
                              let v___uniq_16_ := _t175
                              let v___uniq_14_ := v___uniq_16_
                              _ret := v___uniq_14_
                              leave
                            }
                          }
                        }
                      }
                      case 1 {
                        _ret := v___uniq_5_
                        leave
                      }
                    }
                  }
                  case 1 {
                    revert(shr(1, v___uniq_20_), shr(1, v___uniq_20_))
                    revert(0, 0)
                    let v___uniq_121_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_121_)
                    case 0 {
                      let v___uniq_100_ := v___uniq_119_
                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                      let v___uniq_101_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_101_)
                      case 0 {
                        let v___uniq_102_ := or(shl(1, 32), 1)
                        mstore(shr(1, v___uniq_102_), shr(1, v___uniq_99_))
                        let v___uniq_103_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_103_)
                        case 0 {
                          let v___uniq_104_ := or(shl(1, 64), 1)
                          let _t176 := mload(64)
                          mstore(64, add(_t176, mul(2, 32)))
                          mstore(_t176, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t176, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_104_))), 1))
                          let v___uniq_105_ := _t176
                          switch lean_obj_tag(v___uniq_105_)
                          case 0 {
                            let v___uniq_106_ := mload(add(v___uniq_105_, mul(1, 32)))
                            let v___uniq_107_ := f_Nat_sub(v___uniq_100_, v___uniq_3_)
                            sstore(shr(1, v___uniq_106_), shr(1, v___uniq_107_))
                            let v___uniq_108_ := or(shl(1, 0), 1)
                            let v___uniq_5_ := v___uniq_108_
                            switch lean_obj_tag(v___uniq_5_)
                            case 0 {
                              let v___uniq_6_ := or(shl(1, 0), 1)
                              let _t177 := mload(64)
                              mstore(64, add(_t177, mul(2, 32)))
                              mstore(_t177, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t177, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                              let v___uniq_7_ := _t177
                              switch lean_obj_tag(v___uniq_7_)
                              case 0 {
                                let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                                let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                                sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                                let v___uniq_10_ := or(shl(1, 0), 1)
                                _ret := v___uniq_10_
                                leave
                              }
                              case 1 {
                                let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                                let v___uniq_18_ := 1
                                switch lean_obj_tag(v___uniq_18_)
                                case 0 {
                                  let v___uniq_12_ := v___uniq_7_
                                  let v___uniq_13_ := v___uniq_18_
                                  switch lean_obj_tag(v___uniq_13_)
                                  case 0 {
                                    let v___uniq_14_ := v___uniq_12_
                                    _ret := v___uniq_14_
                                    leave
                                  }
                                  case 1 {
                                    let _t178 := mload(64)
                                    mstore(64, add(_t178, mul(2, 32)))
                                    mstore(_t178, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t178, mul(1, 32)), v___uniq_11_)
                                    let v___uniq_16_ := _t178
                                    let v___uniq_14_ := v___uniq_16_
                                    _ret := v___uniq_14_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_12_ := or(shl(1, 0), 1)
                                  let v___uniq_13_ := v___uniq_18_
                                  switch lean_obj_tag(v___uniq_13_)
                                  case 0 {
                                    let v___uniq_14_ := v___uniq_12_
                                    _ret := v___uniq_14_
                                    leave
                                  }
                                  case 1 {
                                    let _t179 := mload(64)
                                    mstore(64, add(_t179, mul(2, 32)))
                                    mstore(_t179, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t179, mul(1, 32)), v___uniq_11_)
                                    let v___uniq_16_ := _t179
                                    let v___uniq_14_ := v___uniq_16_
                                    _ret := v___uniq_14_
                                    leave
                                  }
                                }
                              }
                            }
                            case 1 {
                              _ret := v___uniq_5_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_109_ := mload(add(v___uniq_105_, mul(1, 32)))
                            let v___uniq_116_ := 1
                            switch lean_obj_tag(v___uniq_116_)
                            case 0 {
                              let v___uniq_110_ := v___uniq_105_
                              let v___uniq_111_ := v___uniq_116_
                              switch lean_obj_tag(v___uniq_111_)
                              case 0 {
                                let v___uniq_112_ := v___uniq_110_
                                _ret := v___uniq_112_
                                leave
                              }
                              case 1 {
                                let _t180 := mload(64)
                                mstore(64, add(_t180, mul(2, 32)))
                                mstore(_t180, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t180, mul(1, 32)), v___uniq_109_)
                                let v___uniq_114_ := _t180
                                let v___uniq_112_ := v___uniq_114_
                                _ret := v___uniq_112_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_110_ := or(shl(1, 0), 1)
                              let v___uniq_111_ := v___uniq_116_
                              switch lean_obj_tag(v___uniq_111_)
                              case 0 {
                                let v___uniq_112_ := v___uniq_110_
                                _ret := v___uniq_112_
                                leave
                              }
                              case 1 {
                                let _t181 := mload(64)
                                mstore(64, add(_t181, mul(2, 32)))
                                mstore(_t181, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t181, mul(1, 32)), v___uniq_109_)
                                let v___uniq_114_ := _t181
                                let v___uniq_112_ := v___uniq_114_
                                _ret := v___uniq_112_
                                leave
                              }
                            }
                          }
                        }
                        case 1 {
                          let v___uniq_5_ := v___uniq_103_
                          switch lean_obj_tag(v___uniq_5_)
                          case 0 {
                            let v___uniq_6_ := or(shl(1, 0), 1)
                            let _t182 := mload(64)
                            mstore(64, add(_t182, mul(2, 32)))
                            mstore(_t182, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t182, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                            let v___uniq_7_ := _t182
                            switch lean_obj_tag(v___uniq_7_)
                            case 0 {
                              let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                              let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                              sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                              let v___uniq_10_ := or(shl(1, 0), 1)
                              _ret := v___uniq_10_
                              leave
                            }
                            case 1 {
                              let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                              let v___uniq_18_ := 1
                              switch lean_obj_tag(v___uniq_18_)
                              case 0 {
                                let v___uniq_12_ := v___uniq_7_
                                let v___uniq_13_ := v___uniq_18_
                                switch lean_obj_tag(v___uniq_13_)
                                case 0 {
                                  let v___uniq_14_ := v___uniq_12_
                                  _ret := v___uniq_14_
                                  leave
                                }
                                case 1 {
                                  let _t183 := mload(64)
                                  mstore(64, add(_t183, mul(2, 32)))
                                  mstore(_t183, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t183, mul(1, 32)), v___uniq_11_)
                                  let v___uniq_16_ := _t183
                                  let v___uniq_14_ := v___uniq_16_
                                  _ret := v___uniq_14_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_12_ := or(shl(1, 0), 1)
                                let v___uniq_13_ := v___uniq_18_
                                switch lean_obj_tag(v___uniq_13_)
                                case 0 {
                                  let v___uniq_14_ := v___uniq_12_
                                  _ret := v___uniq_14_
                                  leave
                                }
                                case 1 {
                                  let _t184 := mload(64)
                                  mstore(64, add(_t184, mul(2, 32)))
                                  mstore(_t184, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t184, mul(1, 32)), v___uniq_11_)
                                  let v___uniq_16_ := _t184
                                  let v___uniq_14_ := v___uniq_16_
                                  _ret := v___uniq_14_
                                  leave
                                }
                              }
                            }
                          }
                          case 1 {
                            _ret := v___uniq_5_
                            leave
                          }
                        }
                      }
                      case 1 {
                        let v___uniq_5_ := v___uniq_101_
                        switch lean_obj_tag(v___uniq_5_)
                        case 0 {
                          let v___uniq_6_ := or(shl(1, 0), 1)
                          let _t185 := mload(64)
                          mstore(64, add(_t185, mul(2, 32)))
                          mstore(_t185, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t185, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                          let v___uniq_7_ := _t185
                          switch lean_obj_tag(v___uniq_7_)
                          case 0 {
                            let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                            let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                            sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                            let v___uniq_10_ := or(shl(1, 0), 1)
                            _ret := v___uniq_10_
                            leave
                          }
                          case 1 {
                            let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                            let v___uniq_18_ := 1
                            switch lean_obj_tag(v___uniq_18_)
                            case 0 {
                              let v___uniq_12_ := v___uniq_7_
                              let v___uniq_13_ := v___uniq_18_
                              switch lean_obj_tag(v___uniq_13_)
                              case 0 {
                                let v___uniq_14_ := v___uniq_12_
                                _ret := v___uniq_14_
                                leave
                              }
                              case 1 {
                                let _t186 := mload(64)
                                mstore(64, add(_t186, mul(2, 32)))
                                mstore(_t186, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t186, mul(1, 32)), v___uniq_11_)
                                let v___uniq_16_ := _t186
                                let v___uniq_14_ := v___uniq_16_
                                _ret := v___uniq_14_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_12_ := or(shl(1, 0), 1)
                              let v___uniq_13_ := v___uniq_18_
                              switch lean_obj_tag(v___uniq_13_)
                              case 0 {
                                let v___uniq_14_ := v___uniq_12_
                                _ret := v___uniq_14_
                                leave
                              }
                              case 1 {
                                let _t187 := mload(64)
                                mstore(64, add(_t187, mul(2, 32)))
                                mstore(_t187, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t187, mul(1, 32)), v___uniq_11_)
                                let v___uniq_16_ := _t187
                                let v___uniq_14_ := v___uniq_16_
                                _ret := v___uniq_14_
                                leave
                              }
                            }
                          }
                        }
                        case 1 {
                          _ret := v___uniq_5_
                          leave
                        }
                      }
                    }
                    case 1 {
                      _ret := v___uniq_121_
                      leave
                    }
                  }
                }
                case 1 {
                  let v___uniq_122_ := mload(add(v___uniq_118_, mul(1, 32)))
                  let v___uniq_129_ := 1
                  switch lean_obj_tag(v___uniq_129_)
                  case 0 {
                    let v___uniq_123_ := v___uniq_118_
                    let v___uniq_124_ := v___uniq_129_
                    switch lean_obj_tag(v___uniq_124_)
                    case 0 {
                      let v___uniq_125_ := v___uniq_123_
                      _ret := v___uniq_125_
                      leave
                    }
                    case 1 {
                      let _t188 := mload(64)
                      mstore(64, add(_t188, mul(2, 32)))
                      mstore(_t188, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t188, mul(1, 32)), v___uniq_122_)
                      let v___uniq_127_ := _t188
                      let v___uniq_125_ := v___uniq_127_
                      _ret := v___uniq_125_
                      leave
                    }
                  }
                  case 1 {
                    let v___uniq_123_ := or(shl(1, 0), 1)
                    let v___uniq_124_ := v___uniq_129_
                    switch lean_obj_tag(v___uniq_124_)
                    case 0 {
                      let v___uniq_125_ := v___uniq_123_
                      _ret := v___uniq_125_
                      leave
                    }
                    case 1 {
                      let _t189 := mload(64)
                      mstore(64, add(_t189, mul(2, 32)))
                      mstore(_t189, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t189, mul(1, 32)), v___uniq_122_)
                      let v___uniq_127_ := _t189
                      let v___uniq_125_ := v___uniq_127_
                      _ret := v___uniq_125_
                      leave
                    }
                  }
                }
              }
              case 1 {
                let v___uniq_118_ := v___uniq_134_
                switch lean_obj_tag(v___uniq_118_)
                case 0 {
                  let v___uniq_119_ := mload(add(v___uniq_118_, mul(1, 32)))
                  let v___uniq_120_ := f_Nat_decLt(v___uniq_119_, v___uniq_3_)
                  switch lean_obj_tag(v___uniq_120_)
                  case 0 {
                    let v___uniq_100_ := v___uniq_119_
                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                    let v___uniq_101_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_101_)
                    case 0 {
                      let v___uniq_102_ := or(shl(1, 32), 1)
                      mstore(shr(1, v___uniq_102_), shr(1, v___uniq_99_))
                      let v___uniq_103_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_103_)
                      case 0 {
                        let v___uniq_104_ := or(shl(1, 64), 1)
                        let _t190 := mload(64)
                        mstore(64, add(_t190, mul(2, 32)))
                        mstore(_t190, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t190, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_104_))), 1))
                        let v___uniq_105_ := _t190
                        switch lean_obj_tag(v___uniq_105_)
                        case 0 {
                          let v___uniq_106_ := mload(add(v___uniq_105_, mul(1, 32)))
                          let v___uniq_107_ := f_Nat_sub(v___uniq_100_, v___uniq_3_)
                          sstore(shr(1, v___uniq_106_), shr(1, v___uniq_107_))
                          let v___uniq_108_ := or(shl(1, 0), 1)
                          let v___uniq_5_ := v___uniq_108_
                          switch lean_obj_tag(v___uniq_5_)
                          case 0 {
                            let v___uniq_6_ := or(shl(1, 0), 1)
                            let _t191 := mload(64)
                            mstore(64, add(_t191, mul(2, 32)))
                            mstore(_t191, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t191, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                            let v___uniq_7_ := _t191
                            switch lean_obj_tag(v___uniq_7_)
                            case 0 {
                              let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                              let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                              sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                              let v___uniq_10_ := or(shl(1, 0), 1)
                              _ret := v___uniq_10_
                              leave
                            }
                            case 1 {
                              let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                              let v___uniq_18_ := 1
                              switch lean_obj_tag(v___uniq_18_)
                              case 0 {
                                let v___uniq_12_ := v___uniq_7_
                                let v___uniq_13_ := v___uniq_18_
                                switch lean_obj_tag(v___uniq_13_)
                                case 0 {
                                  let v___uniq_14_ := v___uniq_12_
                                  _ret := v___uniq_14_
                                  leave
                                }
                                case 1 {
                                  let _t192 := mload(64)
                                  mstore(64, add(_t192, mul(2, 32)))
                                  mstore(_t192, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t192, mul(1, 32)), v___uniq_11_)
                                  let v___uniq_16_ := _t192
                                  let v___uniq_14_ := v___uniq_16_
                                  _ret := v___uniq_14_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_12_ := or(shl(1, 0), 1)
                                let v___uniq_13_ := v___uniq_18_
                                switch lean_obj_tag(v___uniq_13_)
                                case 0 {
                                  let v___uniq_14_ := v___uniq_12_
                                  _ret := v___uniq_14_
                                  leave
                                }
                                case 1 {
                                  let _t193 := mload(64)
                                  mstore(64, add(_t193, mul(2, 32)))
                                  mstore(_t193, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t193, mul(1, 32)), v___uniq_11_)
                                  let v___uniq_16_ := _t193
                                  let v___uniq_14_ := v___uniq_16_
                                  _ret := v___uniq_14_
                                  leave
                                }
                              }
                            }
                          }
                          case 1 {
                            _ret := v___uniq_5_
                            leave
                          }
                        }
                        case 1 {
                          let v___uniq_109_ := mload(add(v___uniq_105_, mul(1, 32)))
                          let v___uniq_116_ := 1
                          switch lean_obj_tag(v___uniq_116_)
                          case 0 {
                            let v___uniq_110_ := v___uniq_105_
                            let v___uniq_111_ := v___uniq_116_
                            switch lean_obj_tag(v___uniq_111_)
                            case 0 {
                              let v___uniq_112_ := v___uniq_110_
                              _ret := v___uniq_112_
                              leave
                            }
                            case 1 {
                              let _t194 := mload(64)
                              mstore(64, add(_t194, mul(2, 32)))
                              mstore(_t194, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t194, mul(1, 32)), v___uniq_109_)
                              let v___uniq_114_ := _t194
                              let v___uniq_112_ := v___uniq_114_
                              _ret := v___uniq_112_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_110_ := or(shl(1, 0), 1)
                            let v___uniq_111_ := v___uniq_116_
                            switch lean_obj_tag(v___uniq_111_)
                            case 0 {
                              let v___uniq_112_ := v___uniq_110_
                              _ret := v___uniq_112_
                              leave
                            }
                            case 1 {
                              let _t195 := mload(64)
                              mstore(64, add(_t195, mul(2, 32)))
                              mstore(_t195, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t195, mul(1, 32)), v___uniq_109_)
                              let v___uniq_114_ := _t195
                              let v___uniq_112_ := v___uniq_114_
                              _ret := v___uniq_112_
                              leave
                            }
                          }
                        }
                      }
                      case 1 {
                        let v___uniq_5_ := v___uniq_103_
                        switch lean_obj_tag(v___uniq_5_)
                        case 0 {
                          let v___uniq_6_ := or(shl(1, 0), 1)
                          let _t196 := mload(64)
                          mstore(64, add(_t196, mul(2, 32)))
                          mstore(_t196, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t196, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                          let v___uniq_7_ := _t196
                          switch lean_obj_tag(v___uniq_7_)
                          case 0 {
                            let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                            let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                            sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                            let v___uniq_10_ := or(shl(1, 0), 1)
                            _ret := v___uniq_10_
                            leave
                          }
                          case 1 {
                            let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                            let v___uniq_18_ := 1
                            switch lean_obj_tag(v___uniq_18_)
                            case 0 {
                              let v___uniq_12_ := v___uniq_7_
                              let v___uniq_13_ := v___uniq_18_
                              switch lean_obj_tag(v___uniq_13_)
                              case 0 {
                                let v___uniq_14_ := v___uniq_12_
                                _ret := v___uniq_14_
                                leave
                              }
                              case 1 {
                                let _t197 := mload(64)
                                mstore(64, add(_t197, mul(2, 32)))
                                mstore(_t197, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t197, mul(1, 32)), v___uniq_11_)
                                let v___uniq_16_ := _t197
                                let v___uniq_14_ := v___uniq_16_
                                _ret := v___uniq_14_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_12_ := or(shl(1, 0), 1)
                              let v___uniq_13_ := v___uniq_18_
                              switch lean_obj_tag(v___uniq_13_)
                              case 0 {
                                let v___uniq_14_ := v___uniq_12_
                                _ret := v___uniq_14_
                                leave
                              }
                              case 1 {
                                let _t198 := mload(64)
                                mstore(64, add(_t198, mul(2, 32)))
                                mstore(_t198, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t198, mul(1, 32)), v___uniq_11_)
                                let v___uniq_16_ := _t198
                                let v___uniq_14_ := v___uniq_16_
                                _ret := v___uniq_14_
                                leave
                              }
                            }
                          }
                        }
                        case 1 {
                          _ret := v___uniq_5_
                          leave
                        }
                      }
                    }
                    case 1 {
                      let v___uniq_5_ := v___uniq_101_
                      switch lean_obj_tag(v___uniq_5_)
                      case 0 {
                        let v___uniq_6_ := or(shl(1, 0), 1)
                        let _t199 := mload(64)
                        mstore(64, add(_t199, mul(2, 32)))
                        mstore(_t199, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t199, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                        let v___uniq_7_ := _t199
                        switch lean_obj_tag(v___uniq_7_)
                        case 0 {
                          let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                          let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                          sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                          let v___uniq_10_ := or(shl(1, 0), 1)
                          _ret := v___uniq_10_
                          leave
                        }
                        case 1 {
                          let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                          let v___uniq_18_ := 1
                          switch lean_obj_tag(v___uniq_18_)
                          case 0 {
                            let v___uniq_12_ := v___uniq_7_
                            let v___uniq_13_ := v___uniq_18_
                            switch lean_obj_tag(v___uniq_13_)
                            case 0 {
                              let v___uniq_14_ := v___uniq_12_
                              _ret := v___uniq_14_
                              leave
                            }
                            case 1 {
                              let _t200 := mload(64)
                              mstore(64, add(_t200, mul(2, 32)))
                              mstore(_t200, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t200, mul(1, 32)), v___uniq_11_)
                              let v___uniq_16_ := _t200
                              let v___uniq_14_ := v___uniq_16_
                              _ret := v___uniq_14_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_12_ := or(shl(1, 0), 1)
                            let v___uniq_13_ := v___uniq_18_
                            switch lean_obj_tag(v___uniq_13_)
                            case 0 {
                              let v___uniq_14_ := v___uniq_12_
                              _ret := v___uniq_14_
                              leave
                            }
                            case 1 {
                              let _t201 := mload(64)
                              mstore(64, add(_t201, mul(2, 32)))
                              mstore(_t201, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t201, mul(1, 32)), v___uniq_11_)
                              let v___uniq_16_ := _t201
                              let v___uniq_14_ := v___uniq_16_
                              _ret := v___uniq_14_
                              leave
                            }
                          }
                        }
                      }
                      case 1 {
                        _ret := v___uniq_5_
                        leave
                      }
                    }
                  }
                  case 1 {
                    revert(shr(1, v___uniq_20_), shr(1, v___uniq_20_))
                    revert(0, 0)
                    let v___uniq_121_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_121_)
                    case 0 {
                      let v___uniq_100_ := v___uniq_119_
                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                      let v___uniq_101_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_101_)
                      case 0 {
                        let v___uniq_102_ := or(shl(1, 32), 1)
                        mstore(shr(1, v___uniq_102_), shr(1, v___uniq_99_))
                        let v___uniq_103_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_103_)
                        case 0 {
                          let v___uniq_104_ := or(shl(1, 64), 1)
                          let _t202 := mload(64)
                          mstore(64, add(_t202, mul(2, 32)))
                          mstore(_t202, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t202, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_104_))), 1))
                          let v___uniq_105_ := _t202
                          switch lean_obj_tag(v___uniq_105_)
                          case 0 {
                            let v___uniq_106_ := mload(add(v___uniq_105_, mul(1, 32)))
                            let v___uniq_107_ := f_Nat_sub(v___uniq_100_, v___uniq_3_)
                            sstore(shr(1, v___uniq_106_), shr(1, v___uniq_107_))
                            let v___uniq_108_ := or(shl(1, 0), 1)
                            let v___uniq_5_ := v___uniq_108_
                            switch lean_obj_tag(v___uniq_5_)
                            case 0 {
                              let v___uniq_6_ := or(shl(1, 0), 1)
                              let _t203 := mload(64)
                              mstore(64, add(_t203, mul(2, 32)))
                              mstore(_t203, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t203, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                              let v___uniq_7_ := _t203
                              switch lean_obj_tag(v___uniq_7_)
                              case 0 {
                                let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                                let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                                sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                                let v___uniq_10_ := or(shl(1, 0), 1)
                                _ret := v___uniq_10_
                                leave
                              }
                              case 1 {
                                let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                                let v___uniq_18_ := 1
                                switch lean_obj_tag(v___uniq_18_)
                                case 0 {
                                  let v___uniq_12_ := v___uniq_7_
                                  let v___uniq_13_ := v___uniq_18_
                                  switch lean_obj_tag(v___uniq_13_)
                                  case 0 {
                                    let v___uniq_14_ := v___uniq_12_
                                    _ret := v___uniq_14_
                                    leave
                                  }
                                  case 1 {
                                    let _t204 := mload(64)
                                    mstore(64, add(_t204, mul(2, 32)))
                                    mstore(_t204, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t204, mul(1, 32)), v___uniq_11_)
                                    let v___uniq_16_ := _t204
                                    let v___uniq_14_ := v___uniq_16_
                                    _ret := v___uniq_14_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_12_ := or(shl(1, 0), 1)
                                  let v___uniq_13_ := v___uniq_18_
                                  switch lean_obj_tag(v___uniq_13_)
                                  case 0 {
                                    let v___uniq_14_ := v___uniq_12_
                                    _ret := v___uniq_14_
                                    leave
                                  }
                                  case 1 {
                                    let _t205 := mload(64)
                                    mstore(64, add(_t205, mul(2, 32)))
                                    mstore(_t205, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t205, mul(1, 32)), v___uniq_11_)
                                    let v___uniq_16_ := _t205
                                    let v___uniq_14_ := v___uniq_16_
                                    _ret := v___uniq_14_
                                    leave
                                  }
                                }
                              }
                            }
                            case 1 {
                              _ret := v___uniq_5_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_109_ := mload(add(v___uniq_105_, mul(1, 32)))
                            let v___uniq_116_ := 1
                            switch lean_obj_tag(v___uniq_116_)
                            case 0 {
                              let v___uniq_110_ := v___uniq_105_
                              let v___uniq_111_ := v___uniq_116_
                              switch lean_obj_tag(v___uniq_111_)
                              case 0 {
                                let v___uniq_112_ := v___uniq_110_
                                _ret := v___uniq_112_
                                leave
                              }
                              case 1 {
                                let _t206 := mload(64)
                                mstore(64, add(_t206, mul(2, 32)))
                                mstore(_t206, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t206, mul(1, 32)), v___uniq_109_)
                                let v___uniq_114_ := _t206
                                let v___uniq_112_ := v___uniq_114_
                                _ret := v___uniq_112_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_110_ := or(shl(1, 0), 1)
                              let v___uniq_111_ := v___uniq_116_
                              switch lean_obj_tag(v___uniq_111_)
                              case 0 {
                                let v___uniq_112_ := v___uniq_110_
                                _ret := v___uniq_112_
                                leave
                              }
                              case 1 {
                                let _t207 := mload(64)
                                mstore(64, add(_t207, mul(2, 32)))
                                mstore(_t207, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t207, mul(1, 32)), v___uniq_109_)
                                let v___uniq_114_ := _t207
                                let v___uniq_112_ := v___uniq_114_
                                _ret := v___uniq_112_
                                leave
                              }
                            }
                          }
                        }
                        case 1 {
                          let v___uniq_5_ := v___uniq_103_
                          switch lean_obj_tag(v___uniq_5_)
                          case 0 {
                            let v___uniq_6_ := or(shl(1, 0), 1)
                            let _t208 := mload(64)
                            mstore(64, add(_t208, mul(2, 32)))
                            mstore(_t208, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t208, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                            let v___uniq_7_ := _t208
                            switch lean_obj_tag(v___uniq_7_)
                            case 0 {
                              let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                              let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                              sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                              let v___uniq_10_ := or(shl(1, 0), 1)
                              _ret := v___uniq_10_
                              leave
                            }
                            case 1 {
                              let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                              let v___uniq_18_ := 1
                              switch lean_obj_tag(v___uniq_18_)
                              case 0 {
                                let v___uniq_12_ := v___uniq_7_
                                let v___uniq_13_ := v___uniq_18_
                                switch lean_obj_tag(v___uniq_13_)
                                case 0 {
                                  let v___uniq_14_ := v___uniq_12_
                                  _ret := v___uniq_14_
                                  leave
                                }
                                case 1 {
                                  let _t209 := mload(64)
                                  mstore(64, add(_t209, mul(2, 32)))
                                  mstore(_t209, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t209, mul(1, 32)), v___uniq_11_)
                                  let v___uniq_16_ := _t209
                                  let v___uniq_14_ := v___uniq_16_
                                  _ret := v___uniq_14_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_12_ := or(shl(1, 0), 1)
                                let v___uniq_13_ := v___uniq_18_
                                switch lean_obj_tag(v___uniq_13_)
                                case 0 {
                                  let v___uniq_14_ := v___uniq_12_
                                  _ret := v___uniq_14_
                                  leave
                                }
                                case 1 {
                                  let _t210 := mload(64)
                                  mstore(64, add(_t210, mul(2, 32)))
                                  mstore(_t210, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t210, mul(1, 32)), v___uniq_11_)
                                  let v___uniq_16_ := _t210
                                  let v___uniq_14_ := v___uniq_16_
                                  _ret := v___uniq_14_
                                  leave
                                }
                              }
                            }
                          }
                          case 1 {
                            _ret := v___uniq_5_
                            leave
                          }
                        }
                      }
                      case 1 {
                        let v___uniq_5_ := v___uniq_101_
                        switch lean_obj_tag(v___uniq_5_)
                        case 0 {
                          let v___uniq_6_ := or(shl(1, 0), 1)
                          let _t211 := mload(64)
                          mstore(64, add(_t211, mul(2, 32)))
                          mstore(_t211, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t211, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_6_))), 1))
                          let v___uniq_7_ := _t211
                          switch lean_obj_tag(v___uniq_7_)
                          case 0 {
                            let v___uniq_8_ := mload(add(v___uniq_7_, mul(1, 32)))
                            let v___uniq_9_ := f_Nat_sub(v___uniq_8_, v___uniq_3_)
                            sstore(shr(1, v___uniq_6_), shr(1, v___uniq_9_))
                            let v___uniq_10_ := or(shl(1, 0), 1)
                            _ret := v___uniq_10_
                            leave
                          }
                          case 1 {
                            let v___uniq_11_ := mload(add(v___uniq_7_, mul(1, 32)))
                            let v___uniq_18_ := 1
                            switch lean_obj_tag(v___uniq_18_)
                            case 0 {
                              let v___uniq_12_ := v___uniq_7_
                              let v___uniq_13_ := v___uniq_18_
                              switch lean_obj_tag(v___uniq_13_)
                              case 0 {
                                let v___uniq_14_ := v___uniq_12_
                                _ret := v___uniq_14_
                                leave
                              }
                              case 1 {
                                let _t212 := mload(64)
                                mstore(64, add(_t212, mul(2, 32)))
                                mstore(_t212, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t212, mul(1, 32)), v___uniq_11_)
                                let v___uniq_16_ := _t212
                                let v___uniq_14_ := v___uniq_16_
                                _ret := v___uniq_14_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_12_ := or(shl(1, 0), 1)
                              let v___uniq_13_ := v___uniq_18_
                              switch lean_obj_tag(v___uniq_13_)
                              case 0 {
                                let v___uniq_14_ := v___uniq_12_
                                _ret := v___uniq_14_
                                leave
                              }
                              case 1 {
                                let _t213 := mload(64)
                                mstore(64, add(_t213, mul(2, 32)))
                                mstore(_t213, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t213, mul(1, 32)), v___uniq_11_)
                                let v___uniq_16_ := _t213
                                let v___uniq_14_ := v___uniq_16_
                                _ret := v___uniq_14_
                                leave
                              }
                            }
                          }
                        }
                        case 1 {
                          _ret := v___uniq_5_
                          leave
                        }
                      }
                    }
                    case 1 {
                      _ret := v___uniq_121_
                      leave
                    }
                  }
                }
                case 1 {
                  let v___uniq_122_ := mload(add(v___uniq_118_, mul(1, 32)))
                  let v___uniq_129_ := 1
                  switch lean_obj_tag(v___uniq_129_)
                  case 0 {
                    let v___uniq_123_ := v___uniq_118_
                    let v___uniq_124_ := v___uniq_129_
                    switch lean_obj_tag(v___uniq_124_)
                    case 0 {
                      let v___uniq_125_ := v___uniq_123_
                      _ret := v___uniq_125_
                      leave
                    }
                    case 1 {
                      let _t214 := mload(64)
                      mstore(64, add(_t214, mul(2, 32)))
                      mstore(_t214, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t214, mul(1, 32)), v___uniq_122_)
                      let v___uniq_127_ := _t214
                      let v___uniq_125_ := v___uniq_127_
                      _ret := v___uniq_125_
                      leave
                    }
                  }
                  case 1 {
                    let v___uniq_123_ := or(shl(1, 0), 1)
                    let v___uniq_124_ := v___uniq_129_
                    switch lean_obj_tag(v___uniq_124_)
                    case 0 {
                      let v___uniq_125_ := v___uniq_123_
                      _ret := v___uniq_125_
                      leave
                    }
                    case 1 {
                      let _t215 := mload(64)
                      mstore(64, add(_t215, mul(2, 32)))
                      mstore(_t215, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t215, mul(1, 32)), v___uniq_122_)
                      let v___uniq_127_ := _t215
                      let v___uniq_125_ := v___uniq_127_
                      _ret := v___uniq_125_
                      leave
                    }
                  }
                }
              }
            }
            case 1 {
              _ret := v___uniq_132_
              leave
            }
          }
          case 1 {
            _ret := v___uniq_98_
            leave
          }
        }
      }
      case 1 {
        let _t216 := mload(64)
        mstore(64, add(_t216, mul(2, 32)))
        mstore(_t216, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
        mstore(add(_t216, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_20_))), 1))
        let v___uniq_137_ := _t216
        switch lean_obj_tag(v___uniq_137_)
        case 0 {
          let v___uniq_138_ := mload(add(v___uniq_137_, mul(1, 32)))
          let v___uniq_139_ := f_Nat_add(v___uniq_138_, v___uniq_3_)
          sstore(shr(1, v___uniq_20_), shr(1, v___uniq_139_))
          let v___uniq_140_ := or(shl(1, 0), 1)
          switch lean_obj_tag(v___uniq_140_)
          case 0 {
            mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
            let v___uniq_141_ := or(shl(1, 0), 1)
            switch lean_obj_tag(v___uniq_141_)
            case 0 {
              let v___uniq_142_ := or(shl(1, 1), 1)
              let v___uniq_170_ := or(shl(1, 32), 1)
              mstore(shr(1, v___uniq_170_), shr(1, v___uniq_142_))
              let v___uniq_171_ := or(shl(1, 0), 1)
              switch lean_obj_tag(v___uniq_171_)
              case 0 {
                let v___uniq_172_ := or(shl(1, 64), 1)
                let _t217 := mload(64)
                mstore(64, add(_t217, mul(2, 32)))
                mstore(_t217, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                mstore(add(_t217, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_172_))), 1))
                let v___uniq_173_ := _t217
                switch lean_obj_tag(v___uniq_173_)
                case 0 {
                  let v___uniq_174_ := mload(add(v___uniq_173_, mul(1, 32)))
                  let _t218 := mload(64)
                  mstore(64, add(_t218, mul(2, 32)))
                  mstore(_t218, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                  mstore(add(_t218, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_174_))), 1))
                  let v___uniq_175_ := _t218
                  let v___uniq_143_ := v___uniq_175_
                  switch lean_obj_tag(v___uniq_143_)
                  case 0 {
                    let v___uniq_144_ := mload(add(v___uniq_143_, mul(1, 32)))
                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                    let v___uniq_145_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_145_)
                    case 0 {
                      let v___uniq_146_ := or(shl(1, 32), 1)
                      mstore(shr(1, v___uniq_146_), shr(1, v___uniq_142_))
                      let v___uniq_147_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_147_)
                      case 0 {
                        let v___uniq_148_ := or(shl(1, 64), 1)
                        let _t219 := mload(64)
                        mstore(64, add(_t219, mul(2, 32)))
                        mstore(_t219, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t219, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_148_))), 1))
                        let v___uniq_149_ := _t219
                        switch lean_obj_tag(v___uniq_149_)
                        case 0 {
                          let v___uniq_150_ := mload(add(v___uniq_149_, mul(1, 32)))
                          let v___uniq_151_ := f_Nat_add(v___uniq_144_, v___uniq_3_)
                          sstore(shr(1, v___uniq_150_), shr(1, v___uniq_151_))
                          let v___uniq_152_ := or(shl(1, 0), 1)
                          _ret := v___uniq_152_
                          leave
                        }
                        case 1 {
                          let v___uniq_153_ := mload(add(v___uniq_149_, mul(1, 32)))
                          let v___uniq_160_ := 1
                          switch lean_obj_tag(v___uniq_160_)
                          case 0 {
                            let v___uniq_154_ := v___uniq_149_
                            let v___uniq_155_ := v___uniq_160_
                            switch lean_obj_tag(v___uniq_155_)
                            case 0 {
                              let v___uniq_156_ := v___uniq_154_
                              _ret := v___uniq_156_
                              leave
                            }
                            case 1 {
                              let _t220 := mload(64)
                              mstore(64, add(_t220, mul(2, 32)))
                              mstore(_t220, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t220, mul(1, 32)), v___uniq_153_)
                              let v___uniq_158_ := _t220
                              let v___uniq_156_ := v___uniq_158_
                              _ret := v___uniq_156_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_154_ := or(shl(1, 0), 1)
                            let v___uniq_155_ := v___uniq_160_
                            switch lean_obj_tag(v___uniq_155_)
                            case 0 {
                              let v___uniq_156_ := v___uniq_154_
                              _ret := v___uniq_156_
                              leave
                            }
                            case 1 {
                              let _t221 := mload(64)
                              mstore(64, add(_t221, mul(2, 32)))
                              mstore(_t221, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t221, mul(1, 32)), v___uniq_153_)
                              let v___uniq_158_ := _t221
                              let v___uniq_156_ := v___uniq_158_
                              _ret := v___uniq_156_
                              leave
                            }
                          }
                        }
                      }
                      case 1 {
                        _ret := v___uniq_147_
                        leave
                      }
                    }
                    case 1 {
                      _ret := v___uniq_145_
                      leave
                    }
                  }
                  case 1 {
                    let v___uniq_161_ := mload(add(v___uniq_143_, mul(1, 32)))
                    let v___uniq_168_ := 1
                    switch lean_obj_tag(v___uniq_168_)
                    case 0 {
                      let v___uniq_162_ := v___uniq_143_
                      let v___uniq_163_ := v___uniq_168_
                      switch lean_obj_tag(v___uniq_163_)
                      case 0 {
                        let v___uniq_164_ := v___uniq_162_
                        _ret := v___uniq_164_
                        leave
                      }
                      case 1 {
                        let _t222 := mload(64)
                        mstore(64, add(_t222, mul(2, 32)))
                        mstore(_t222, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t222, mul(1, 32)), v___uniq_161_)
                        let v___uniq_166_ := _t222
                        let v___uniq_164_ := v___uniq_166_
                        _ret := v___uniq_164_
                        leave
                      }
                    }
                    case 1 {
                      let v___uniq_162_ := or(shl(1, 0), 1)
                      let v___uniq_163_ := v___uniq_168_
                      switch lean_obj_tag(v___uniq_163_)
                      case 0 {
                        let v___uniq_164_ := v___uniq_162_
                        _ret := v___uniq_164_
                        leave
                      }
                      case 1 {
                        let _t223 := mload(64)
                        mstore(64, add(_t223, mul(2, 32)))
                        mstore(_t223, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t223, mul(1, 32)), v___uniq_161_)
                        let v___uniq_166_ := _t223
                        let v___uniq_164_ := v___uniq_166_
                        _ret := v___uniq_164_
                        leave
                      }
                    }
                  }
                }
                case 1 {
                  let v___uniq_143_ := v___uniq_173_
                  switch lean_obj_tag(v___uniq_143_)
                  case 0 {
                    let v___uniq_144_ := mload(add(v___uniq_143_, mul(1, 32)))
                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_2_))
                    let v___uniq_145_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_145_)
                    case 0 {
                      let v___uniq_146_ := or(shl(1, 32), 1)
                      mstore(shr(1, v___uniq_146_), shr(1, v___uniq_142_))
                      let v___uniq_147_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_147_)
                      case 0 {
                        let v___uniq_148_ := or(shl(1, 64), 1)
                        let _t224 := mload(64)
                        mstore(64, add(_t224, mul(2, 32)))
                        mstore(_t224, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t224, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_20_), shr(1, v___uniq_148_))), 1))
                        let v___uniq_149_ := _t224
                        switch lean_obj_tag(v___uniq_149_)
                        case 0 {
                          let v___uniq_150_ := mload(add(v___uniq_149_, mul(1, 32)))
                          let v___uniq_151_ := f_Nat_add(v___uniq_144_, v___uniq_3_)
                          sstore(shr(1, v___uniq_150_), shr(1, v___uniq_151_))
                          let v___uniq_152_ := or(shl(1, 0), 1)
                          _ret := v___uniq_152_
                          leave
                        }
                        case 1 {
                          let v___uniq_153_ := mload(add(v___uniq_149_, mul(1, 32)))
                          let v___uniq_160_ := 1
                          switch lean_obj_tag(v___uniq_160_)
                          case 0 {
                            let v___uniq_154_ := v___uniq_149_
                            let v___uniq_155_ := v___uniq_160_
                            switch lean_obj_tag(v___uniq_155_)
                            case 0 {
                              let v___uniq_156_ := v___uniq_154_
                              _ret := v___uniq_156_
                              leave
                            }
                            case 1 {
                              let _t225 := mload(64)
                              mstore(64, add(_t225, mul(2, 32)))
                              mstore(_t225, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t225, mul(1, 32)), v___uniq_153_)
                              let v___uniq_158_ := _t225
                              let v___uniq_156_ := v___uniq_158_
                              _ret := v___uniq_156_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_154_ := or(shl(1, 0), 1)
                            let v___uniq_155_ := v___uniq_160_
                            switch lean_obj_tag(v___uniq_155_)
                            case 0 {
                              let v___uniq_156_ := v___uniq_154_
                              _ret := v___uniq_156_
                              leave
                            }
                            case 1 {
                              let _t226 := mload(64)
                              mstore(64, add(_t226, mul(2, 32)))
                              mstore(_t226, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t226, mul(1, 32)), v___uniq_153_)
                              let v___uniq_158_ := _t226
                              let v___uniq_156_ := v___uniq_158_
                              _ret := v___uniq_156_
                              leave
                            }
                          }
                        }
                      }
                      case 1 {
                        _ret := v___uniq_147_
                        leave
                      }
                    }
                    case 1 {
                      _ret := v___uniq_145_
                      leave
                    }
                  }
                  case 1 {
                    let v___uniq_161_ := mload(add(v___uniq_143_, mul(1, 32)))
                    let v___uniq_168_ := 1
                    switch lean_obj_tag(v___uniq_168_)
                    case 0 {
                      let v___uniq_162_ := v___uniq_143_
                      let v___uniq_163_ := v___uniq_168_
                      switch lean_obj_tag(v___uniq_163_)
                      case 0 {
                        let v___uniq_164_ := v___uniq_162_
                        _ret := v___uniq_164_
                        leave
                      }
                      case 1 {
                        let _t227 := mload(64)
                        mstore(64, add(_t227, mul(2, 32)))
                        mstore(_t227, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t227, mul(1, 32)), v___uniq_161_)
                        let v___uniq_166_ := _t227
                        let v___uniq_164_ := v___uniq_166_
                        _ret := v___uniq_164_
                        leave
                      }
                    }
                    case 1 {
                      let v___uniq_162_ := or(shl(1, 0), 1)
                      let v___uniq_163_ := v___uniq_168_
                      switch lean_obj_tag(v___uniq_163_)
                      case 0 {
                        let v___uniq_164_ := v___uniq_162_
                        _ret := v___uniq_164_
                        leave
                      }
                      case 1 {
                        let _t228 := mload(64)
                        mstore(64, add(_t228, mul(2, 32)))
                        mstore(_t228, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t228, mul(1, 32)), v___uniq_161_)
                        let v___uniq_166_ := _t228
                        let v___uniq_164_ := v___uniq_166_
                        _ret := v___uniq_164_
                        leave
                      }
                    }
                  }
                }
              }
              case 1 {
                _ret := v___uniq_171_
                leave
              }
            }
            case 1 {
              _ret := v___uniq_141_
              leave
            }
          }
          case 1 {
            _ret := v___uniq_140_
            leave
          }
        }
        case 1 {
          let v___uniq_176_ := mload(add(v___uniq_137_, mul(1, 32)))
          let v___uniq_183_ := 1
          switch lean_obj_tag(v___uniq_183_)
          case 0 {
            let v___uniq_177_ := v___uniq_137_
            let v___uniq_178_ := v___uniq_183_
            switch lean_obj_tag(v___uniq_178_)
            case 0 {
              let v___uniq_179_ := v___uniq_177_
              _ret := v___uniq_179_
              leave
            }
            case 1 {
              let _t229 := mload(64)
              mstore(64, add(_t229, mul(2, 32)))
              mstore(_t229, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t229, mul(1, 32)), v___uniq_176_)
              let v___uniq_181_ := _t229
              let v___uniq_179_ := v___uniq_181_
              _ret := v___uniq_179_
              leave
            }
          }
          case 1 {
            let v___uniq_177_ := or(shl(1, 0), 1)
            let v___uniq_178_ := v___uniq_183_
            switch lean_obj_tag(v___uniq_178_)
            case 0 {
              let v___uniq_179_ := v___uniq_177_
              _ret := v___uniq_179_
              leave
            }
            case 1 {
              let _t230 := mload(64)
              mstore(64, add(_t230, mul(2, 32)))
              mstore(_t230, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t230, mul(1, 32)), v___uniq_176_)
              let v___uniq_181_ := _t230
              let v___uniq_179_ := v___uniq_181_
              _ret := v___uniq_179_
              leave
            }
          }
        }
      }
      leave
    }
    function f_ERC20_doUpdate___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_, v___uniq_4_) -> _ret {
      let v___uniq_5_ := f_ERC20_doUpdate(v___uniq_1_, v___uniq_2_, v___uniq_3_)
      _ret := v___uniq_5_
      leave
      leave
    }
    function f_ERC20_doTransfer(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let v___uniq_9_ := or(shl(1, 0), 1)
      let v___uniq_10_ := f_Nat_decEq(v___uniq_1_, v___uniq_9_)
      switch lean_obj_tag(v___uniq_10_)
      case 0 {
        let v___uniq_11_ := f_Nat_decEq(v___uniq_2_, v___uniq_9_)
        switch lean_obj_tag(v___uniq_11_)
        case 0 {
          let v___uniq_12_ := f_ERC20_doUpdate(v___uniq_1_, v___uniq_2_, v___uniq_3_)
          _ret := v___uniq_12_
          leave
        }
        case 1 {
          let v___uniq_5_ := or(shl(1, 0), 1)
          revert(shr(1, v___uniq_5_), shr(1, v___uniq_5_))
          revert(0, 0)
          let v___uniq_6_ := or(shl(1, 0), 1)
          switch lean_obj_tag(v___uniq_6_)
          case 0 {
            let v___uniq_7_ := f_ERC20_doUpdate(v___uniq_1_, v___uniq_2_, v___uniq_3_)
            _ret := v___uniq_7_
            leave
          }
          case 1 {
            _ret := v___uniq_6_
            leave
          }
        }
      }
      case 1 {
        let v___uniq_5_ := or(shl(1, 0), 1)
        revert(shr(1, v___uniq_5_), shr(1, v___uniq_5_))
        revert(0, 0)
        let v___uniq_6_ := or(shl(1, 0), 1)
        switch lean_obj_tag(v___uniq_6_)
        case 0 {
          let v___uniq_7_ := f_ERC20_doUpdate(v___uniq_1_, v___uniq_2_, v___uniq_3_)
          _ret := v___uniq_7_
          leave
        }
        case 1 {
          _ret := v___uniq_6_
          leave
        }
      }
      leave
    }
    function f_ERC20_doTransfer___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_, v___uniq_4_) -> _ret {
      let v___uniq_5_ := f_ERC20_doTransfer(v___uniq_1_, v___uniq_2_, v___uniq_3_)
      _ret := v___uniq_5_
      leave
      leave
    }
    function f_ERC20_doSpendAllowance(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let v___uniq_18_ := or(shl(1, 0), 1)
      mstore(shr(1, v___uniq_18_), shr(1, v___uniq_2_))
      let v___uniq_19_ := or(shl(1, 0), 1)
      switch lean_obj_tag(v___uniq_19_)
      case 0 {
        let v___uniq_20_ := or(shl(1, 32), 1)
        mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
        let v___uniq_21_ := or(shl(1, 0), 1)
        switch lean_obj_tag(v___uniq_21_)
        case 0 {
          let v___uniq_22_ := or(shl(1, 2), 1)
          let v___uniq_57_ := or(shl(1, 64), 1)
          let _t0 := mload(64)
          mstore(64, add(_t0, mul(2, 32)))
          mstore(_t0, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
          mstore(add(_t0, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_57_))), 1))
          let v___uniq_58_ := _t0
          switch lean_obj_tag(v___uniq_58_)
          case 0 {
            let v___uniq_59_ := mload(add(v___uniq_58_, mul(1, 32)))
            mstore(shr(1, v___uniq_18_), shr(1, v___uniq_59_))
            let v___uniq_60_ := or(shl(1, 0), 1)
            switch lean_obj_tag(v___uniq_60_)
            case 0 {
              mstore(shr(1, v___uniq_20_), shr(1, v___uniq_22_))
              let v___uniq_61_ := or(shl(1, 0), 1)
              switch lean_obj_tag(v___uniq_61_)
              case 0 {
                let _t1 := mload(64)
                mstore(64, add(_t1, mul(2, 32)))
                mstore(_t1, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                mstore(add(_t1, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_57_))), 1))
                let v___uniq_62_ := _t1
                let v___uniq_34_ := v___uniq_62_
                switch lean_obj_tag(v___uniq_34_)
                case 0 {
                  let v___uniq_35_ := mload(add(v___uniq_34_, mul(1, 32)))
                  let _t2 := mload(64)
                  mstore(64, add(_t2, mul(2, 32)))
                  mstore(_t2, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                  mstore(add(_t2, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_35_))), 1))
                  let v___uniq_36_ := _t2
                  switch lean_obj_tag(v___uniq_36_)
                  case 0 {
                    let v___uniq_37_ := mload(add(v___uniq_36_, mul(1, 32)))
                    let v___uniq_38_ := f_Nat_decLt(v___uniq_37_, v___uniq_3_)
                    switch lean_obj_tag(v___uniq_38_)
                    case 0 {
                      let v___uniq_23_ := v___uniq_37_
                      mstore(shr(1, v___uniq_18_), shr(1, v___uniq_2_))
                      let v___uniq_24_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_24_)
                      case 0 {
                        mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                        let v___uniq_25_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_25_)
                        case 0 {
                          let v___uniq_26_ := f_Nat_sub(v___uniq_23_, v___uniq_3_)
                          let v___uniq_27_ := or(shl(1, 64), 1)
                          let _t3 := mload(64)
                          mstore(64, add(_t3, mul(2, 32)))
                          mstore(_t3, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t3, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_27_))), 1))
                          let v___uniq_28_ := _t3
                          switch lean_obj_tag(v___uniq_28_)
                          case 0 {
                            let v___uniq_29_ := mload(add(v___uniq_28_, mul(1, 32)))
                            mstore(shr(1, v___uniq_18_), shr(1, v___uniq_29_))
                            let v___uniq_30_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_30_)
                            case 0 {
                              mstore(shr(1, v___uniq_20_), shr(1, v___uniq_22_))
                              let v___uniq_31_ := or(shl(1, 0), 1)
                              switch lean_obj_tag(v___uniq_31_)
                              case 0 {
                                let _t4 := mload(64)
                                mstore(64, add(_t4, mul(2, 32)))
                                mstore(_t4, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t4, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_27_))), 1))
                                let v___uniq_32_ := _t4
                                let v___uniq_5_ := v___uniq_26_
                                let v___uniq_6_ := v___uniq_32_
                                switch lean_obj_tag(v___uniq_6_)
                                case 0 {
                                  let v___uniq_7_ := mload(add(v___uniq_6_, mul(1, 32)))
                                  sstore(shr(1, v___uniq_7_), shr(1, v___uniq_5_))
                                  let v___uniq_8_ := or(shl(1, 0), 1)
                                  _ret := v___uniq_8_
                                  leave
                                }
                                case 1 {
                                  let v___uniq_9_ := mload(add(v___uniq_6_, mul(1, 32)))
                                  let v___uniq_16_ := 1
                                  switch lean_obj_tag(v___uniq_16_)
                                  case 0 {
                                    let v___uniq_10_ := v___uniq_6_
                                    let v___uniq_11_ := v___uniq_16_
                                    switch lean_obj_tag(v___uniq_11_)
                                    case 0 {
                                      let v___uniq_12_ := v___uniq_10_
                                      _ret := v___uniq_12_
                                      leave
                                    }
                                    case 1 {
                                      let _t5 := mload(64)
                                      mstore(64, add(_t5, mul(2, 32)))
                                      mstore(_t5, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t5, mul(1, 32)), v___uniq_9_)
                                      let v___uniq_14_ := _t5
                                      let v___uniq_12_ := v___uniq_14_
                                      _ret := v___uniq_12_
                                      leave
                                    }
                                  }
                                  case 1 {
                                    let v___uniq_10_ := or(shl(1, 0), 1)
                                    let v___uniq_11_ := v___uniq_16_
                                    switch lean_obj_tag(v___uniq_11_)
                                    case 0 {
                                      let v___uniq_12_ := v___uniq_10_
                                      _ret := v___uniq_12_
                                      leave
                                    }
                                    case 1 {
                                      let _t6 := mload(64)
                                      mstore(64, add(_t6, mul(2, 32)))
                                      mstore(_t6, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                      mstore(add(_t6, mul(1, 32)), v___uniq_9_)
                                      let v___uniq_14_ := _t6
                                      let v___uniq_12_ := v___uniq_14_
                                      _ret := v___uniq_12_
                                      leave
                                    }
                                  }
                                }
                              }
                              case 1 {
                                _ret := v___uniq_31_
                                leave
                              }
                            }
                            case 1 {
                              _ret := v___uniq_30_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_5_ := v___uniq_26_
                            let v___uniq_6_ := v___uniq_28_
                            switch lean_obj_tag(v___uniq_6_)
                            case 0 {
                              let v___uniq_7_ := mload(add(v___uniq_6_, mul(1, 32)))
                              sstore(shr(1, v___uniq_7_), shr(1, v___uniq_5_))
                              let v___uniq_8_ := or(shl(1, 0), 1)
                              _ret := v___uniq_8_
                              leave
                            }
                            case 1 {
                              let v___uniq_9_ := mload(add(v___uniq_6_, mul(1, 32)))
                              let v___uniq_16_ := 1
                              switch lean_obj_tag(v___uniq_16_)
                              case 0 {
                                let v___uniq_10_ := v___uniq_6_
                                let v___uniq_11_ := v___uniq_16_
                                switch lean_obj_tag(v___uniq_11_)
                                case 0 {
                                  let v___uniq_12_ := v___uniq_10_
                                  _ret := v___uniq_12_
                                  leave
                                }
                                case 1 {
                                  let _t7 := mload(64)
                                  mstore(64, add(_t7, mul(2, 32)))
                                  mstore(_t7, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t7, mul(1, 32)), v___uniq_9_)
                                  let v___uniq_14_ := _t7
                                  let v___uniq_12_ := v___uniq_14_
                                  _ret := v___uniq_12_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_10_ := or(shl(1, 0), 1)
                                let v___uniq_11_ := v___uniq_16_
                                switch lean_obj_tag(v___uniq_11_)
                                case 0 {
                                  let v___uniq_12_ := v___uniq_10_
                                  _ret := v___uniq_12_
                                  leave
                                }
                                case 1 {
                                  let _t8 := mload(64)
                                  mstore(64, add(_t8, mul(2, 32)))
                                  mstore(_t8, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t8, mul(1, 32)), v___uniq_9_)
                                  let v___uniq_14_ := _t8
                                  let v___uniq_12_ := v___uniq_14_
                                  _ret := v___uniq_12_
                                  leave
                                }
                              }
                            }
                          }
                        }
                        case 1 {
                          _ret := v___uniq_25_
                          leave
                        }
                      }
                      case 1 {
                        _ret := v___uniq_24_
                        leave
                      }
                    }
                    case 1 {
                      revert(shr(1, v___uniq_18_), shr(1, v___uniq_18_))
                      revert(0, 0)
                      let v___uniq_39_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_39_)
                      case 0 {
                        let v___uniq_23_ := v___uniq_37_
                        mstore(shr(1, v___uniq_18_), shr(1, v___uniq_2_))
                        let v___uniq_24_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_24_)
                        case 0 {
                          mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                          let v___uniq_25_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_25_)
                          case 0 {
                            let v___uniq_26_ := f_Nat_sub(v___uniq_23_, v___uniq_3_)
                            let v___uniq_27_ := or(shl(1, 64), 1)
                            let _t9 := mload(64)
                            mstore(64, add(_t9, mul(2, 32)))
                            mstore(_t9, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t9, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_27_))), 1))
                            let v___uniq_28_ := _t9
                            switch lean_obj_tag(v___uniq_28_)
                            case 0 {
                              let v___uniq_29_ := mload(add(v___uniq_28_, mul(1, 32)))
                              mstore(shr(1, v___uniq_18_), shr(1, v___uniq_29_))
                              let v___uniq_30_ := or(shl(1, 0), 1)
                              switch lean_obj_tag(v___uniq_30_)
                              case 0 {
                                mstore(shr(1, v___uniq_20_), shr(1, v___uniq_22_))
                                let v___uniq_31_ := or(shl(1, 0), 1)
                                switch lean_obj_tag(v___uniq_31_)
                                case 0 {
                                  let _t10 := mload(64)
                                  mstore(64, add(_t10, mul(2, 32)))
                                  mstore(_t10, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t10, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_27_))), 1))
                                  let v___uniq_32_ := _t10
                                  let v___uniq_5_ := v___uniq_26_
                                  let v___uniq_6_ := v___uniq_32_
                                  switch lean_obj_tag(v___uniq_6_)
                                  case 0 {
                                    let v___uniq_7_ := mload(add(v___uniq_6_, mul(1, 32)))
                                    sstore(shr(1, v___uniq_7_), shr(1, v___uniq_5_))
                                    let v___uniq_8_ := or(shl(1, 0), 1)
                                    _ret := v___uniq_8_
                                    leave
                                  }
                                  case 1 {
                                    let v___uniq_9_ := mload(add(v___uniq_6_, mul(1, 32)))
                                    let v___uniq_16_ := 1
                                    switch lean_obj_tag(v___uniq_16_)
                                    case 0 {
                                      let v___uniq_10_ := v___uniq_6_
                                      let v___uniq_11_ := v___uniq_16_
                                      switch lean_obj_tag(v___uniq_11_)
                                      case 0 {
                                        let v___uniq_12_ := v___uniq_10_
                                        _ret := v___uniq_12_
                                        leave
                                      }
                                      case 1 {
                                        let _t11 := mload(64)
                                        mstore(64, add(_t11, mul(2, 32)))
                                        mstore(_t11, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t11, mul(1, 32)), v___uniq_9_)
                                        let v___uniq_14_ := _t11
                                        let v___uniq_12_ := v___uniq_14_
                                        _ret := v___uniq_12_
                                        leave
                                      }
                                    }
                                    case 1 {
                                      let v___uniq_10_ := or(shl(1, 0), 1)
                                      let v___uniq_11_ := v___uniq_16_
                                      switch lean_obj_tag(v___uniq_11_)
                                      case 0 {
                                        let v___uniq_12_ := v___uniq_10_
                                        _ret := v___uniq_12_
                                        leave
                                      }
                                      case 1 {
                                        let _t12 := mload(64)
                                        mstore(64, add(_t12, mul(2, 32)))
                                        mstore(_t12, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                        mstore(add(_t12, mul(1, 32)), v___uniq_9_)
                                        let v___uniq_14_ := _t12
                                        let v___uniq_12_ := v___uniq_14_
                                        _ret := v___uniq_12_
                                        leave
                                      }
                                    }
                                  }
                                }
                                case 1 {
                                  _ret := v___uniq_31_
                                  leave
                                }
                              }
                              case 1 {
                                _ret := v___uniq_30_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_5_ := v___uniq_26_
                              let v___uniq_6_ := v___uniq_28_
                              switch lean_obj_tag(v___uniq_6_)
                              case 0 {
                                let v___uniq_7_ := mload(add(v___uniq_6_, mul(1, 32)))
                                sstore(shr(1, v___uniq_7_), shr(1, v___uniq_5_))
                                let v___uniq_8_ := or(shl(1, 0), 1)
                                _ret := v___uniq_8_
                                leave
                              }
                              case 1 {
                                let v___uniq_9_ := mload(add(v___uniq_6_, mul(1, 32)))
                                let v___uniq_16_ := 1
                                switch lean_obj_tag(v___uniq_16_)
                                case 0 {
                                  let v___uniq_10_ := v___uniq_6_
                                  let v___uniq_11_ := v___uniq_16_
                                  switch lean_obj_tag(v___uniq_11_)
                                  case 0 {
                                    let v___uniq_12_ := v___uniq_10_
                                    _ret := v___uniq_12_
                                    leave
                                  }
                                  case 1 {
                                    let _t13 := mload(64)
                                    mstore(64, add(_t13, mul(2, 32)))
                                    mstore(_t13, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t13, mul(1, 32)), v___uniq_9_)
                                    let v___uniq_14_ := _t13
                                    let v___uniq_12_ := v___uniq_14_
                                    _ret := v___uniq_12_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_10_ := or(shl(1, 0), 1)
                                  let v___uniq_11_ := v___uniq_16_
                                  switch lean_obj_tag(v___uniq_11_)
                                  case 0 {
                                    let v___uniq_12_ := v___uniq_10_
                                    _ret := v___uniq_12_
                                    leave
                                  }
                                  case 1 {
                                    let _t14 := mload(64)
                                    mstore(64, add(_t14, mul(2, 32)))
                                    mstore(_t14, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t14, mul(1, 32)), v___uniq_9_)
                                    let v___uniq_14_ := _t14
                                    let v___uniq_12_ := v___uniq_14_
                                    _ret := v___uniq_12_
                                    leave
                                  }
                                }
                              }
                            }
                          }
                          case 1 {
                            _ret := v___uniq_25_
                            leave
                          }
                        }
                        case 1 {
                          _ret := v___uniq_24_
                          leave
                        }
                      }
                      case 1 {
                        _ret := v___uniq_39_
                        leave
                      }
                    }
                  }
                  case 1 {
                    let v___uniq_40_ := mload(add(v___uniq_36_, mul(1, 32)))
                    let v___uniq_47_ := 1
                    switch lean_obj_tag(v___uniq_47_)
                    case 0 {
                      let v___uniq_41_ := v___uniq_36_
                      let v___uniq_42_ := v___uniq_47_
                      switch lean_obj_tag(v___uniq_42_)
                      case 0 {
                        let v___uniq_43_ := v___uniq_41_
                        _ret := v___uniq_43_
                        leave
                      }
                      case 1 {
                        let _t15 := mload(64)
                        mstore(64, add(_t15, mul(2, 32)))
                        mstore(_t15, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t15, mul(1, 32)), v___uniq_40_)
                        let v___uniq_45_ := _t15
                        let v___uniq_43_ := v___uniq_45_
                        _ret := v___uniq_43_
                        leave
                      }
                    }
                    case 1 {
                      let v___uniq_41_ := or(shl(1, 0), 1)
                      let v___uniq_42_ := v___uniq_47_
                      switch lean_obj_tag(v___uniq_42_)
                      case 0 {
                        let v___uniq_43_ := v___uniq_41_
                        _ret := v___uniq_43_
                        leave
                      }
                      case 1 {
                        let _t16 := mload(64)
                        mstore(64, add(_t16, mul(2, 32)))
                        mstore(_t16, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t16, mul(1, 32)), v___uniq_40_)
                        let v___uniq_45_ := _t16
                        let v___uniq_43_ := v___uniq_45_
                        _ret := v___uniq_43_
                        leave
                      }
                    }
                  }
                }
                case 1 {
                  let v___uniq_48_ := mload(add(v___uniq_34_, mul(1, 32)))
                  let v___uniq_55_ := 1
                  switch lean_obj_tag(v___uniq_55_)
                  case 0 {
                    let v___uniq_49_ := v___uniq_34_
                    let v___uniq_50_ := v___uniq_55_
                    switch lean_obj_tag(v___uniq_50_)
                    case 0 {
                      let v___uniq_51_ := v___uniq_49_
                      _ret := v___uniq_51_
                      leave
                    }
                    case 1 {
                      let _t17 := mload(64)
                      mstore(64, add(_t17, mul(2, 32)))
                      mstore(_t17, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t17, mul(1, 32)), v___uniq_48_)
                      let v___uniq_53_ := _t17
                      let v___uniq_51_ := v___uniq_53_
                      _ret := v___uniq_51_
                      leave
                    }
                  }
                  case 1 {
                    let v___uniq_49_ := or(shl(1, 0), 1)
                    let v___uniq_50_ := v___uniq_55_
                    switch lean_obj_tag(v___uniq_50_)
                    case 0 {
                      let v___uniq_51_ := v___uniq_49_
                      _ret := v___uniq_51_
                      leave
                    }
                    case 1 {
                      let _t18 := mload(64)
                      mstore(64, add(_t18, mul(2, 32)))
                      mstore(_t18, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t18, mul(1, 32)), v___uniq_48_)
                      let v___uniq_53_ := _t18
                      let v___uniq_51_ := v___uniq_53_
                      _ret := v___uniq_51_
                      leave
                    }
                  }
                }
              }
              case 1 {
                _ret := v___uniq_61_
                leave
              }
            }
            case 1 {
              _ret := v___uniq_60_
              leave
            }
          }
          case 1 {
            let v___uniq_34_ := v___uniq_58_
            switch lean_obj_tag(v___uniq_34_)
            case 0 {
              let v___uniq_35_ := mload(add(v___uniq_34_, mul(1, 32)))
              let _t19 := mload(64)
              mstore(64, add(_t19, mul(2, 32)))
              mstore(_t19, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t19, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_35_))), 1))
              let v___uniq_36_ := _t19
              switch lean_obj_tag(v___uniq_36_)
              case 0 {
                let v___uniq_37_ := mload(add(v___uniq_36_, mul(1, 32)))
                let v___uniq_38_ := f_Nat_decLt(v___uniq_37_, v___uniq_3_)
                switch lean_obj_tag(v___uniq_38_)
                case 0 {
                  let v___uniq_23_ := v___uniq_37_
                  mstore(shr(1, v___uniq_18_), shr(1, v___uniq_2_))
                  let v___uniq_24_ := or(shl(1, 0), 1)
                  switch lean_obj_tag(v___uniq_24_)
                  case 0 {
                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                    let v___uniq_25_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_25_)
                    case 0 {
                      let v___uniq_26_ := f_Nat_sub(v___uniq_23_, v___uniq_3_)
                      let v___uniq_27_ := or(shl(1, 64), 1)
                      let _t20 := mload(64)
                      mstore(64, add(_t20, mul(2, 32)))
                      mstore(_t20, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t20, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_27_))), 1))
                      let v___uniq_28_ := _t20
                      switch lean_obj_tag(v___uniq_28_)
                      case 0 {
                        let v___uniq_29_ := mload(add(v___uniq_28_, mul(1, 32)))
                        mstore(shr(1, v___uniq_18_), shr(1, v___uniq_29_))
                        let v___uniq_30_ := or(shl(1, 0), 1)
                        switch lean_obj_tag(v___uniq_30_)
                        case 0 {
                          mstore(shr(1, v___uniq_20_), shr(1, v___uniq_22_))
                          let v___uniq_31_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_31_)
                          case 0 {
                            let _t21 := mload(64)
                            mstore(64, add(_t21, mul(2, 32)))
                            mstore(_t21, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t21, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_27_))), 1))
                            let v___uniq_32_ := _t21
                            let v___uniq_5_ := v___uniq_26_
                            let v___uniq_6_ := v___uniq_32_
                            switch lean_obj_tag(v___uniq_6_)
                            case 0 {
                              let v___uniq_7_ := mload(add(v___uniq_6_, mul(1, 32)))
                              sstore(shr(1, v___uniq_7_), shr(1, v___uniq_5_))
                              let v___uniq_8_ := or(shl(1, 0), 1)
                              _ret := v___uniq_8_
                              leave
                            }
                            case 1 {
                              let v___uniq_9_ := mload(add(v___uniq_6_, mul(1, 32)))
                              let v___uniq_16_ := 1
                              switch lean_obj_tag(v___uniq_16_)
                              case 0 {
                                let v___uniq_10_ := v___uniq_6_
                                let v___uniq_11_ := v___uniq_16_
                                switch lean_obj_tag(v___uniq_11_)
                                case 0 {
                                  let v___uniq_12_ := v___uniq_10_
                                  _ret := v___uniq_12_
                                  leave
                                }
                                case 1 {
                                  let _t22 := mload(64)
                                  mstore(64, add(_t22, mul(2, 32)))
                                  mstore(_t22, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t22, mul(1, 32)), v___uniq_9_)
                                  let v___uniq_14_ := _t22
                                  let v___uniq_12_ := v___uniq_14_
                                  _ret := v___uniq_12_
                                  leave
                                }
                              }
                              case 1 {
                                let v___uniq_10_ := or(shl(1, 0), 1)
                                let v___uniq_11_ := v___uniq_16_
                                switch lean_obj_tag(v___uniq_11_)
                                case 0 {
                                  let v___uniq_12_ := v___uniq_10_
                                  _ret := v___uniq_12_
                                  leave
                                }
                                case 1 {
                                  let _t23 := mload(64)
                                  mstore(64, add(_t23, mul(2, 32)))
                                  mstore(_t23, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                  mstore(add(_t23, mul(1, 32)), v___uniq_9_)
                                  let v___uniq_14_ := _t23
                                  let v___uniq_12_ := v___uniq_14_
                                  _ret := v___uniq_12_
                                  leave
                                }
                              }
                            }
                          }
                          case 1 {
                            _ret := v___uniq_31_
                            leave
                          }
                        }
                        case 1 {
                          _ret := v___uniq_30_
                          leave
                        }
                      }
                      case 1 {
                        let v___uniq_5_ := v___uniq_26_
                        let v___uniq_6_ := v___uniq_28_
                        switch lean_obj_tag(v___uniq_6_)
                        case 0 {
                          let v___uniq_7_ := mload(add(v___uniq_6_, mul(1, 32)))
                          sstore(shr(1, v___uniq_7_), shr(1, v___uniq_5_))
                          let v___uniq_8_ := or(shl(1, 0), 1)
                          _ret := v___uniq_8_
                          leave
                        }
                        case 1 {
                          let v___uniq_9_ := mload(add(v___uniq_6_, mul(1, 32)))
                          let v___uniq_16_ := 1
                          switch lean_obj_tag(v___uniq_16_)
                          case 0 {
                            let v___uniq_10_ := v___uniq_6_
                            let v___uniq_11_ := v___uniq_16_
                            switch lean_obj_tag(v___uniq_11_)
                            case 0 {
                              let v___uniq_12_ := v___uniq_10_
                              _ret := v___uniq_12_
                              leave
                            }
                            case 1 {
                              let _t24 := mload(64)
                              mstore(64, add(_t24, mul(2, 32)))
                              mstore(_t24, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t24, mul(1, 32)), v___uniq_9_)
                              let v___uniq_14_ := _t24
                              let v___uniq_12_ := v___uniq_14_
                              _ret := v___uniq_12_
                              leave
                            }
                          }
                          case 1 {
                            let v___uniq_10_ := or(shl(1, 0), 1)
                            let v___uniq_11_ := v___uniq_16_
                            switch lean_obj_tag(v___uniq_11_)
                            case 0 {
                              let v___uniq_12_ := v___uniq_10_
                              _ret := v___uniq_12_
                              leave
                            }
                            case 1 {
                              let _t25 := mload(64)
                              mstore(64, add(_t25, mul(2, 32)))
                              mstore(_t25, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t25, mul(1, 32)), v___uniq_9_)
                              let v___uniq_14_ := _t25
                              let v___uniq_12_ := v___uniq_14_
                              _ret := v___uniq_12_
                              leave
                            }
                          }
                        }
                      }
                    }
                    case 1 {
                      _ret := v___uniq_25_
                      leave
                    }
                  }
                  case 1 {
                    _ret := v___uniq_24_
                    leave
                  }
                }
                case 1 {
                  revert(shr(1, v___uniq_18_), shr(1, v___uniq_18_))
                  revert(0, 0)
                  let v___uniq_39_ := or(shl(1, 0), 1)
                  switch lean_obj_tag(v___uniq_39_)
                  case 0 {
                    let v___uniq_23_ := v___uniq_37_
                    mstore(shr(1, v___uniq_18_), shr(1, v___uniq_2_))
                    let v___uniq_24_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_24_)
                    case 0 {
                      mstore(shr(1, v___uniq_20_), shr(1, v___uniq_1_))
                      let v___uniq_25_ := or(shl(1, 0), 1)
                      switch lean_obj_tag(v___uniq_25_)
                      case 0 {
                        let v___uniq_26_ := f_Nat_sub(v___uniq_23_, v___uniq_3_)
                        let v___uniq_27_ := or(shl(1, 64), 1)
                        let _t26 := mload(64)
                        mstore(64, add(_t26, mul(2, 32)))
                        mstore(_t26, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t26, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_27_))), 1))
                        let v___uniq_28_ := _t26
                        switch lean_obj_tag(v___uniq_28_)
                        case 0 {
                          let v___uniq_29_ := mload(add(v___uniq_28_, mul(1, 32)))
                          mstore(shr(1, v___uniq_18_), shr(1, v___uniq_29_))
                          let v___uniq_30_ := or(shl(1, 0), 1)
                          switch lean_obj_tag(v___uniq_30_)
                          case 0 {
                            mstore(shr(1, v___uniq_20_), shr(1, v___uniq_22_))
                            let v___uniq_31_ := or(shl(1, 0), 1)
                            switch lean_obj_tag(v___uniq_31_)
                            case 0 {
                              let _t27 := mload(64)
                              mstore(64, add(_t27, mul(2, 32)))
                              mstore(_t27, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                              mstore(add(_t27, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_27_))), 1))
                              let v___uniq_32_ := _t27
                              let v___uniq_5_ := v___uniq_26_
                              let v___uniq_6_ := v___uniq_32_
                              switch lean_obj_tag(v___uniq_6_)
                              case 0 {
                                let v___uniq_7_ := mload(add(v___uniq_6_, mul(1, 32)))
                                sstore(shr(1, v___uniq_7_), shr(1, v___uniq_5_))
                                let v___uniq_8_ := or(shl(1, 0), 1)
                                _ret := v___uniq_8_
                                leave
                              }
                              case 1 {
                                let v___uniq_9_ := mload(add(v___uniq_6_, mul(1, 32)))
                                let v___uniq_16_ := 1
                                switch lean_obj_tag(v___uniq_16_)
                                case 0 {
                                  let v___uniq_10_ := v___uniq_6_
                                  let v___uniq_11_ := v___uniq_16_
                                  switch lean_obj_tag(v___uniq_11_)
                                  case 0 {
                                    let v___uniq_12_ := v___uniq_10_
                                    _ret := v___uniq_12_
                                    leave
                                  }
                                  case 1 {
                                    let _t28 := mload(64)
                                    mstore(64, add(_t28, mul(2, 32)))
                                    mstore(_t28, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t28, mul(1, 32)), v___uniq_9_)
                                    let v___uniq_14_ := _t28
                                    let v___uniq_12_ := v___uniq_14_
                                    _ret := v___uniq_12_
                                    leave
                                  }
                                }
                                case 1 {
                                  let v___uniq_10_ := or(shl(1, 0), 1)
                                  let v___uniq_11_ := v___uniq_16_
                                  switch lean_obj_tag(v___uniq_11_)
                                  case 0 {
                                    let v___uniq_12_ := v___uniq_10_
                                    _ret := v___uniq_12_
                                    leave
                                  }
                                  case 1 {
                                    let _t29 := mload(64)
                                    mstore(64, add(_t29, mul(2, 32)))
                                    mstore(_t29, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                    mstore(add(_t29, mul(1, 32)), v___uniq_9_)
                                    let v___uniq_14_ := _t29
                                    let v___uniq_12_ := v___uniq_14_
                                    _ret := v___uniq_12_
                                    leave
                                  }
                                }
                              }
                            }
                            case 1 {
                              _ret := v___uniq_31_
                              leave
                            }
                          }
                          case 1 {
                            _ret := v___uniq_30_
                            leave
                          }
                        }
                        case 1 {
                          let v___uniq_5_ := v___uniq_26_
                          let v___uniq_6_ := v___uniq_28_
                          switch lean_obj_tag(v___uniq_6_)
                          case 0 {
                            let v___uniq_7_ := mload(add(v___uniq_6_, mul(1, 32)))
                            sstore(shr(1, v___uniq_7_), shr(1, v___uniq_5_))
                            let v___uniq_8_ := or(shl(1, 0), 1)
                            _ret := v___uniq_8_
                            leave
                          }
                          case 1 {
                            let v___uniq_9_ := mload(add(v___uniq_6_, mul(1, 32)))
                            let v___uniq_16_ := 1
                            switch lean_obj_tag(v___uniq_16_)
                            case 0 {
                              let v___uniq_10_ := v___uniq_6_
                              let v___uniq_11_ := v___uniq_16_
                              switch lean_obj_tag(v___uniq_11_)
                              case 0 {
                                let v___uniq_12_ := v___uniq_10_
                                _ret := v___uniq_12_
                                leave
                              }
                              case 1 {
                                let _t30 := mload(64)
                                mstore(64, add(_t30, mul(2, 32)))
                                mstore(_t30, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t30, mul(1, 32)), v___uniq_9_)
                                let v___uniq_14_ := _t30
                                let v___uniq_12_ := v___uniq_14_
                                _ret := v___uniq_12_
                                leave
                              }
                            }
                            case 1 {
                              let v___uniq_10_ := or(shl(1, 0), 1)
                              let v___uniq_11_ := v___uniq_16_
                              switch lean_obj_tag(v___uniq_11_)
                              case 0 {
                                let v___uniq_12_ := v___uniq_10_
                                _ret := v___uniq_12_
                                leave
                              }
                              case 1 {
                                let _t31 := mload(64)
                                mstore(64, add(_t31, mul(2, 32)))
                                mstore(_t31, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                                mstore(add(_t31, mul(1, 32)), v___uniq_9_)
                                let v___uniq_14_ := _t31
                                let v___uniq_12_ := v___uniq_14_
                                _ret := v___uniq_12_
                                leave
                              }
                            }
                          }
                        }
                      }
                      case 1 {
                        _ret := v___uniq_25_
                        leave
                      }
                    }
                    case 1 {
                      _ret := v___uniq_24_
                      leave
                    }
                  }
                  case 1 {
                    _ret := v___uniq_39_
                    leave
                  }
                }
              }
              case 1 {
                let v___uniq_40_ := mload(add(v___uniq_36_, mul(1, 32)))
                let v___uniq_47_ := 1
                switch lean_obj_tag(v___uniq_47_)
                case 0 {
                  let v___uniq_41_ := v___uniq_36_
                  let v___uniq_42_ := v___uniq_47_
                  switch lean_obj_tag(v___uniq_42_)
                  case 0 {
                    let v___uniq_43_ := v___uniq_41_
                    _ret := v___uniq_43_
                    leave
                  }
                  case 1 {
                    let _t32 := mload(64)
                    mstore(64, add(_t32, mul(2, 32)))
                    mstore(_t32, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                    mstore(add(_t32, mul(1, 32)), v___uniq_40_)
                    let v___uniq_45_ := _t32
                    let v___uniq_43_ := v___uniq_45_
                    _ret := v___uniq_43_
                    leave
                  }
                }
                case 1 {
                  let v___uniq_41_ := or(shl(1, 0), 1)
                  let v___uniq_42_ := v___uniq_47_
                  switch lean_obj_tag(v___uniq_42_)
                  case 0 {
                    let v___uniq_43_ := v___uniq_41_
                    _ret := v___uniq_43_
                    leave
                  }
                  case 1 {
                    let _t33 := mload(64)
                    mstore(64, add(_t33, mul(2, 32)))
                    mstore(_t33, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                    mstore(add(_t33, mul(1, 32)), v___uniq_40_)
                    let v___uniq_45_ := _t33
                    let v___uniq_43_ := v___uniq_45_
                    _ret := v___uniq_43_
                    leave
                  }
                }
              }
            }
            case 1 {
              let v___uniq_48_ := mload(add(v___uniq_34_, mul(1, 32)))
              let v___uniq_55_ := 1
              switch lean_obj_tag(v___uniq_55_)
              case 0 {
                let v___uniq_49_ := v___uniq_34_
                let v___uniq_50_ := v___uniq_55_
                switch lean_obj_tag(v___uniq_50_)
                case 0 {
                  let v___uniq_51_ := v___uniq_49_
                  _ret := v___uniq_51_
                  leave
                }
                case 1 {
                  let _t34 := mload(64)
                  mstore(64, add(_t34, mul(2, 32)))
                  mstore(_t34, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                  mstore(add(_t34, mul(1, 32)), v___uniq_48_)
                  let v___uniq_53_ := _t34
                  let v___uniq_51_ := v___uniq_53_
                  _ret := v___uniq_51_
                  leave
                }
              }
              case 1 {
                let v___uniq_49_ := or(shl(1, 0), 1)
                let v___uniq_50_ := v___uniq_55_
                switch lean_obj_tag(v___uniq_50_)
                case 0 {
                  let v___uniq_51_ := v___uniq_49_
                  _ret := v___uniq_51_
                  leave
                }
                case 1 {
                  let _t35 := mload(64)
                  mstore(64, add(_t35, mul(2, 32)))
                  mstore(_t35, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                  mstore(add(_t35, mul(1, 32)), v___uniq_48_)
                  let v___uniq_53_ := _t35
                  let v___uniq_51_ := v___uniq_53_
                  _ret := v___uniq_51_
                  leave
                }
              }
            }
          }
        }
        case 1 {
          _ret := v___uniq_21_
          leave
        }
      }
      case 1 {
        _ret := v___uniq_19_
        leave
      }
      leave
    }
    function f_ERC20_doSpendAllowance___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_, v___uniq_4_) -> _ret {
      let v___uniq_5_ := f_ERC20_doSpendAllowance(v___uniq_1_, v___uniq_2_, v___uniq_3_)
      _ret := v___uniq_5_
      leave
      leave
    }
    function f_ERC20_totalSupply() -> _ret {
      let v___uniq_2_ := or(shl(1, 0), 1)
      let _t0 := mload(64)
      mstore(64, add(_t0, mul(2, 32)))
      mstore(_t0, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
      mstore(add(_t0, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_2_))), 1))
      let v___uniq_3_ := _t0
      _ret := v___uniq_3_
      leave
      leave
    }
    function f_ERC20_totalSupply___boxed(v___uniq_1_) -> _ret {
      let v___uniq_2_ := f_ERC20_totalSupply()
      _ret := v___uniq_2_
      leave
      leave
    }
    function f_ERC20_balanceOf(v___uniq_1_) -> _ret {
      let v___uniq_3_ := or(shl(1, 0), 1)
      mstore(shr(1, v___uniq_3_), shr(1, v___uniq_1_))
      let v___uniq_4_ := or(shl(1, 0), 1)
      switch lean_obj_tag(v___uniq_4_)
      case 0 {
        let v___uniq_5_ := or(shl(1, 1), 1)
        let v___uniq_6_ := or(shl(1, 32), 1)
        mstore(shr(1, v___uniq_6_), shr(1, v___uniq_5_))
        let v___uniq_7_ := or(shl(1, 0), 1)
        switch lean_obj_tag(v___uniq_7_)
        case 0 {
          let v___uniq_8_ := or(shl(1, 64), 1)
          let _t0 := mload(64)
          mstore(64, add(_t0, mul(2, 32)))
          mstore(_t0, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
          mstore(add(_t0, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_3_), shr(1, v___uniq_8_))), 1))
          let v___uniq_9_ := _t0
          switch lean_obj_tag(v___uniq_9_)
          case 0 {
            let v___uniq_10_ := mload(add(v___uniq_9_, mul(1, 32)))
            let _t1 := mload(64)
            mstore(64, add(_t1, mul(2, 32)))
            mstore(_t1, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t1, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_10_))), 1))
            let v___uniq_11_ := _t1
            _ret := v___uniq_11_
            leave
          }
          case 1 {
            _ret := v___uniq_9_
            leave
          }
        }
        case 1 {
          let v___uniq_12_ := mload(add(v___uniq_7_, mul(1, 32)))
          let v___uniq_19_ := 1
          switch lean_obj_tag(v___uniq_19_)
          case 0 {
            let v___uniq_13_ := v___uniq_7_
            let v___uniq_14_ := v___uniq_19_
            switch lean_obj_tag(v___uniq_14_)
            case 0 {
              let v___uniq_15_ := v___uniq_13_
              _ret := v___uniq_15_
              leave
            }
            case 1 {
              let _t2 := mload(64)
              mstore(64, add(_t2, mul(2, 32)))
              mstore(_t2, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t2, mul(1, 32)), v___uniq_12_)
              let v___uniq_17_ := _t2
              let v___uniq_15_ := v___uniq_17_
              _ret := v___uniq_15_
              leave
            }
          }
          case 1 {
            let v___uniq_13_ := or(shl(1, 0), 1)
            let v___uniq_14_ := v___uniq_19_
            switch lean_obj_tag(v___uniq_14_)
            case 0 {
              let v___uniq_15_ := v___uniq_13_
              _ret := v___uniq_15_
              leave
            }
            case 1 {
              let _t3 := mload(64)
              mstore(64, add(_t3, mul(2, 32)))
              mstore(_t3, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t3, mul(1, 32)), v___uniq_12_)
              let v___uniq_17_ := _t3
              let v___uniq_15_ := v___uniq_17_
              _ret := v___uniq_15_
              leave
            }
          }
        }
      }
      case 1 {
        let v___uniq_20_ := mload(add(v___uniq_4_, mul(1, 32)))
        let v___uniq_27_ := 1
        switch lean_obj_tag(v___uniq_27_)
        case 0 {
          let v___uniq_21_ := v___uniq_4_
          let v___uniq_22_ := v___uniq_27_
          switch lean_obj_tag(v___uniq_22_)
          case 0 {
            let v___uniq_23_ := v___uniq_21_
            _ret := v___uniq_23_
            leave
          }
          case 1 {
            let _t4 := mload(64)
            mstore(64, add(_t4, mul(2, 32)))
            mstore(_t4, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t4, mul(1, 32)), v___uniq_20_)
            let v___uniq_25_ := _t4
            let v___uniq_23_ := v___uniq_25_
            _ret := v___uniq_23_
            leave
          }
        }
        case 1 {
          let v___uniq_21_ := or(shl(1, 0), 1)
          let v___uniq_22_ := v___uniq_27_
          switch lean_obj_tag(v___uniq_22_)
          case 0 {
            let v___uniq_23_ := v___uniq_21_
            _ret := v___uniq_23_
            leave
          }
          case 1 {
            let _t5 := mload(64)
            mstore(64, add(_t5, mul(2, 32)))
            mstore(_t5, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t5, mul(1, 32)), v___uniq_20_)
            let v___uniq_25_ := _t5
            let v___uniq_23_ := v___uniq_25_
            _ret := v___uniq_23_
            leave
          }
        }
      }
      leave
    }
    function f_ERC20_balanceOf___boxed(v___uniq_1_, v___uniq_2_) -> _ret {
      let v___uniq_3_ := f_ERC20_balanceOf(v___uniq_1_)
      _ret := v___uniq_3_
      leave
      leave
    }
    function f_ERC20_transfer(v___uniq_1_, v___uniq_2_) -> _ret {
      let _t0 := mload(64)
      mstore(64, add(_t0, mul(2, 32)))
      mstore(_t0, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
      mstore(add(_t0, mul(1, 32)), or(shl(1, caller()), 1))
      let v___uniq_4_ := _t0
      switch lean_obj_tag(v___uniq_4_)
      case 0 {
        let v___uniq_5_ := mload(add(v___uniq_4_, mul(1, 32)))
        let v___uniq_6_ := f_ERC20_doTransfer(v___uniq_5_, v___uniq_1_, v___uniq_2_)
        _ret := v___uniq_6_
        leave
      }
      case 1 {
        let v___uniq_7_ := mload(add(v___uniq_4_, mul(1, 32)))
        let v___uniq_14_ := 1
        switch lean_obj_tag(v___uniq_14_)
        case 0 {
          let v___uniq_8_ := v___uniq_4_
          let v___uniq_9_ := v___uniq_14_
          switch lean_obj_tag(v___uniq_9_)
          case 0 {
            let v___uniq_10_ := v___uniq_8_
            _ret := v___uniq_10_
            leave
          }
          case 1 {
            let _t1 := mload(64)
            mstore(64, add(_t1, mul(2, 32)))
            mstore(_t1, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t1, mul(1, 32)), v___uniq_7_)
            let v___uniq_12_ := _t1
            let v___uniq_10_ := v___uniq_12_
            _ret := v___uniq_10_
            leave
          }
        }
        case 1 {
          let v___uniq_8_ := or(shl(1, 0), 1)
          let v___uniq_9_ := v___uniq_14_
          switch lean_obj_tag(v___uniq_9_)
          case 0 {
            let v___uniq_10_ := v___uniq_8_
            _ret := v___uniq_10_
            leave
          }
          case 1 {
            let _t2 := mload(64)
            mstore(64, add(_t2, mul(2, 32)))
            mstore(_t2, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t2, mul(1, 32)), v___uniq_7_)
            let v___uniq_12_ := _t2
            let v___uniq_10_ := v___uniq_12_
            _ret := v___uniq_10_
            leave
          }
        }
      }
      leave
    }
    function f_ERC20_transfer___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let v___uniq_4_ := f_ERC20_transfer(v___uniq_1_, v___uniq_2_)
      _ret := v___uniq_4_
      leave
      leave
    }
    function f_ERC20_allowance(v___uniq_1_, v___uniq_2_) -> _ret {
      let v___uniq_8_ := or(shl(1, 0), 1)
      mstore(shr(1, v___uniq_8_), shr(1, v___uniq_2_))
      let v___uniq_9_ := or(shl(1, 0), 1)
      switch lean_obj_tag(v___uniq_9_)
      case 0 {
        let v___uniq_10_ := or(shl(1, 32), 1)
        mstore(shr(1, v___uniq_10_), shr(1, v___uniq_1_))
        let v___uniq_11_ := or(shl(1, 0), 1)
        switch lean_obj_tag(v___uniq_11_)
        case 0 {
          let v___uniq_12_ := or(shl(1, 64), 1)
          let _t0 := mload(64)
          mstore(64, add(_t0, mul(2, 32)))
          mstore(_t0, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
          mstore(add(_t0, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_8_), shr(1, v___uniq_12_))), 1))
          let v___uniq_13_ := _t0
          switch lean_obj_tag(v___uniq_13_)
          case 0 {
            let v___uniq_14_ := mload(add(v___uniq_13_, mul(1, 32)))
            mstore(shr(1, v___uniq_8_), shr(1, v___uniq_14_))
            let v___uniq_15_ := or(shl(1, 0), 1)
            switch lean_obj_tag(v___uniq_15_)
            case 0 {
              let v___uniq_16_ := or(shl(1, 2), 1)
              mstore(shr(1, v___uniq_10_), shr(1, v___uniq_16_))
              let v___uniq_17_ := or(shl(1, 0), 1)
              switch lean_obj_tag(v___uniq_17_)
              case 0 {
                let _t1 := mload(64)
                mstore(64, add(_t1, mul(2, 32)))
                mstore(_t1, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                mstore(add(_t1, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_8_), shr(1, v___uniq_12_))), 1))
                let v___uniq_18_ := _t1
                let v___uniq_4_ := v___uniq_18_
                switch lean_obj_tag(v___uniq_4_)
                case 0 {
                  let v___uniq_5_ := mload(add(v___uniq_4_, mul(1, 32)))
                  let _t2 := mload(64)
                  mstore(64, add(_t2, mul(2, 32)))
                  mstore(_t2, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                  mstore(add(_t2, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_5_))), 1))
                  let v___uniq_6_ := _t2
                  _ret := v___uniq_6_
                  leave
                }
                case 1 {
                  _ret := v___uniq_4_
                  leave
                }
              }
              case 1 {
                let v___uniq_19_ := mload(add(v___uniq_17_, mul(1, 32)))
                let v___uniq_26_ := 1
                switch lean_obj_tag(v___uniq_26_)
                case 0 {
                  let v___uniq_20_ := v___uniq_17_
                  let v___uniq_21_ := v___uniq_26_
                  switch lean_obj_tag(v___uniq_21_)
                  case 0 {
                    let v___uniq_22_ := v___uniq_20_
                    _ret := v___uniq_22_
                    leave
                  }
                  case 1 {
                    let _t3 := mload(64)
                    mstore(64, add(_t3, mul(2, 32)))
                    mstore(_t3, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                    mstore(add(_t3, mul(1, 32)), v___uniq_19_)
                    let v___uniq_24_ := _t3
                    let v___uniq_22_ := v___uniq_24_
                    _ret := v___uniq_22_
                    leave
                  }
                }
                case 1 {
                  let v___uniq_20_ := or(shl(1, 0), 1)
                  let v___uniq_21_ := v___uniq_26_
                  switch lean_obj_tag(v___uniq_21_)
                  case 0 {
                    let v___uniq_22_ := v___uniq_20_
                    _ret := v___uniq_22_
                    leave
                  }
                  case 1 {
                    let _t4 := mload(64)
                    mstore(64, add(_t4, mul(2, 32)))
                    mstore(_t4, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                    mstore(add(_t4, mul(1, 32)), v___uniq_19_)
                    let v___uniq_24_ := _t4
                    let v___uniq_22_ := v___uniq_24_
                    _ret := v___uniq_22_
                    leave
                  }
                }
              }
            }
            case 1 {
              let v___uniq_27_ := mload(add(v___uniq_15_, mul(1, 32)))
              let v___uniq_34_ := 1
              switch lean_obj_tag(v___uniq_34_)
              case 0 {
                let v___uniq_28_ := v___uniq_15_
                let v___uniq_29_ := v___uniq_34_
                switch lean_obj_tag(v___uniq_29_)
                case 0 {
                  let v___uniq_30_ := v___uniq_28_
                  _ret := v___uniq_30_
                  leave
                }
                case 1 {
                  let _t5 := mload(64)
                  mstore(64, add(_t5, mul(2, 32)))
                  mstore(_t5, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                  mstore(add(_t5, mul(1, 32)), v___uniq_27_)
                  let v___uniq_32_ := _t5
                  let v___uniq_30_ := v___uniq_32_
                  _ret := v___uniq_30_
                  leave
                }
              }
              case 1 {
                let v___uniq_28_ := or(shl(1, 0), 1)
                let v___uniq_29_ := v___uniq_34_
                switch lean_obj_tag(v___uniq_29_)
                case 0 {
                  let v___uniq_30_ := v___uniq_28_
                  _ret := v___uniq_30_
                  leave
                }
                case 1 {
                  let _t6 := mload(64)
                  mstore(64, add(_t6, mul(2, 32)))
                  mstore(_t6, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                  mstore(add(_t6, mul(1, 32)), v___uniq_27_)
                  let v___uniq_32_ := _t6
                  let v___uniq_30_ := v___uniq_32_
                  _ret := v___uniq_30_
                  leave
                }
              }
            }
          }
          case 1 {
            let v___uniq_4_ := v___uniq_13_
            switch lean_obj_tag(v___uniq_4_)
            case 0 {
              let v___uniq_5_ := mload(add(v___uniq_4_, mul(1, 32)))
              let _t7 := mload(64)
              mstore(64, add(_t7, mul(2, 32)))
              mstore(_t7, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t7, mul(1, 32)), or(shl(1, sload(shr(1, v___uniq_5_))), 1))
              let v___uniq_6_ := _t7
              _ret := v___uniq_6_
              leave
            }
            case 1 {
              _ret := v___uniq_4_
              leave
            }
          }
        }
        case 1 {
          let v___uniq_35_ := mload(add(v___uniq_11_, mul(1, 32)))
          let v___uniq_42_ := 1
          switch lean_obj_tag(v___uniq_42_)
          case 0 {
            let v___uniq_36_ := v___uniq_11_
            let v___uniq_37_ := v___uniq_42_
            switch lean_obj_tag(v___uniq_37_)
            case 0 {
              let v___uniq_38_ := v___uniq_36_
              _ret := v___uniq_38_
              leave
            }
            case 1 {
              let _t8 := mload(64)
              mstore(64, add(_t8, mul(2, 32)))
              mstore(_t8, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t8, mul(1, 32)), v___uniq_35_)
              let v___uniq_40_ := _t8
              let v___uniq_38_ := v___uniq_40_
              _ret := v___uniq_38_
              leave
            }
          }
          case 1 {
            let v___uniq_36_ := or(shl(1, 0), 1)
            let v___uniq_37_ := v___uniq_42_
            switch lean_obj_tag(v___uniq_37_)
            case 0 {
              let v___uniq_38_ := v___uniq_36_
              _ret := v___uniq_38_
              leave
            }
            case 1 {
              let _t9 := mload(64)
              mstore(64, add(_t9, mul(2, 32)))
              mstore(_t9, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t9, mul(1, 32)), v___uniq_35_)
              let v___uniq_40_ := _t9
              let v___uniq_38_ := v___uniq_40_
              _ret := v___uniq_38_
              leave
            }
          }
        }
      }
      case 1 {
        let v___uniq_43_ := mload(add(v___uniq_9_, mul(1, 32)))
        let v___uniq_50_ := 1
        switch lean_obj_tag(v___uniq_50_)
        case 0 {
          let v___uniq_44_ := v___uniq_9_
          let v___uniq_45_ := v___uniq_50_
          switch lean_obj_tag(v___uniq_45_)
          case 0 {
            let v___uniq_46_ := v___uniq_44_
            _ret := v___uniq_46_
            leave
          }
          case 1 {
            let _t10 := mload(64)
            mstore(64, add(_t10, mul(2, 32)))
            mstore(_t10, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t10, mul(1, 32)), v___uniq_43_)
            let v___uniq_48_ := _t10
            let v___uniq_46_ := v___uniq_48_
            _ret := v___uniq_46_
            leave
          }
        }
        case 1 {
          let v___uniq_44_ := or(shl(1, 0), 1)
          let v___uniq_45_ := v___uniq_50_
          switch lean_obj_tag(v___uniq_45_)
          case 0 {
            let v___uniq_46_ := v___uniq_44_
            _ret := v___uniq_46_
            leave
          }
          case 1 {
            let _t11 := mload(64)
            mstore(64, add(_t11, mul(2, 32)))
            mstore(_t11, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t11, mul(1, 32)), v___uniq_43_)
            let v___uniq_48_ := _t11
            let v___uniq_46_ := v___uniq_48_
            _ret := v___uniq_46_
            leave
          }
        }
      }
      leave
    }
    function f_ERC20_allowance___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let v___uniq_4_ := f_ERC20_allowance(v___uniq_1_, v___uniq_2_)
      _ret := v___uniq_4_
      leave
      leave
    }
    function f_ERC20_approve(v___uniq_1_, v___uniq_2_) -> _ret {
      let v___uniq_38_ := or(shl(1, 0), 1)
      let v___uniq_39_ := f_Nat_decEq(v___uniq_1_, v___uniq_38_)
      switch lean_obj_tag(v___uniq_39_)
      case 0 {
        let _t0 := mload(64)
        mstore(64, add(_t0, mul(2, 32)))
        mstore(_t0, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
        mstore(add(_t0, mul(1, 32)), or(shl(1, caller()), 1))
        let v___uniq_16_ := _t0
        switch lean_obj_tag(v___uniq_16_)
        case 0 {
          let v___uniq_17_ := mload(add(v___uniq_16_, mul(1, 32)))
          let v___uniq_18_ := or(shl(1, 0), 1)
          mstore(shr(1, v___uniq_18_), shr(1, v___uniq_1_))
          let v___uniq_19_ := or(shl(1, 0), 1)
          switch lean_obj_tag(v___uniq_19_)
          case 0 {
            let v___uniq_20_ := or(shl(1, 32), 1)
            mstore(shr(1, v___uniq_20_), shr(1, v___uniq_17_))
            let v___uniq_21_ := or(shl(1, 0), 1)
            switch lean_obj_tag(v___uniq_21_)
            case 0 {
              let v___uniq_22_ := or(shl(1, 64), 1)
              let _t1 := mload(64)
              mstore(64, add(_t1, mul(2, 32)))
              mstore(_t1, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t1, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_22_))), 1))
              let v___uniq_23_ := _t1
              switch lean_obj_tag(v___uniq_23_)
              case 0 {
                let v___uniq_24_ := mload(add(v___uniq_23_, mul(1, 32)))
                mstore(shr(1, v___uniq_18_), shr(1, v___uniq_24_))
                let v___uniq_25_ := or(shl(1, 0), 1)
                switch lean_obj_tag(v___uniq_25_)
                case 0 {
                  let v___uniq_26_ := or(shl(1, 2), 1)
                  mstore(shr(1, v___uniq_20_), shr(1, v___uniq_26_))
                  let v___uniq_27_ := or(shl(1, 0), 1)
                  switch lean_obj_tag(v___uniq_27_)
                  case 0 {
                    let _t2 := mload(64)
                    mstore(64, add(_t2, mul(2, 32)))
                    mstore(_t2, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                    mstore(add(_t2, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_22_))), 1))
                    let v___uniq_28_ := _t2
                    let v___uniq_4_ := v___uniq_28_
                    switch lean_obj_tag(v___uniq_4_)
                    case 0 {
                      let v___uniq_5_ := mload(add(v___uniq_4_, mul(1, 32)))
                      sstore(shr(1, v___uniq_5_), shr(1, v___uniq_2_))
                      let v___uniq_6_ := or(shl(1, 0), 1)
                      _ret := v___uniq_6_
                      leave
                    }
                    case 1 {
                      let v___uniq_7_ := mload(add(v___uniq_4_, mul(1, 32)))
                      let v___uniq_14_ := 1
                      switch lean_obj_tag(v___uniq_14_)
                      case 0 {
                        let v___uniq_8_ := v___uniq_4_
                        let v___uniq_9_ := v___uniq_14_
                        switch lean_obj_tag(v___uniq_9_)
                        case 0 {
                          let v___uniq_10_ := v___uniq_8_
                          _ret := v___uniq_10_
                          leave
                        }
                        case 1 {
                          let _t3 := mload(64)
                          mstore(64, add(_t3, mul(2, 32)))
                          mstore(_t3, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t3, mul(1, 32)), v___uniq_7_)
                          let v___uniq_12_ := _t3
                          let v___uniq_10_ := v___uniq_12_
                          _ret := v___uniq_10_
                          leave
                        }
                      }
                      case 1 {
                        let v___uniq_8_ := or(shl(1, 0), 1)
                        let v___uniq_9_ := v___uniq_14_
                        switch lean_obj_tag(v___uniq_9_)
                        case 0 {
                          let v___uniq_10_ := v___uniq_8_
                          _ret := v___uniq_10_
                          leave
                        }
                        case 1 {
                          let _t4 := mload(64)
                          mstore(64, add(_t4, mul(2, 32)))
                          mstore(_t4, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                          mstore(add(_t4, mul(1, 32)), v___uniq_7_)
                          let v___uniq_12_ := _t4
                          let v___uniq_10_ := v___uniq_12_
                          _ret := v___uniq_10_
                          leave
                        }
                      }
                    }
                  }
                  case 1 {
                    _ret := v___uniq_27_
                    leave
                  }
                }
                case 1 {
                  _ret := v___uniq_25_
                  leave
                }
              }
              case 1 {
                let v___uniq_4_ := v___uniq_23_
                switch lean_obj_tag(v___uniq_4_)
                case 0 {
                  let v___uniq_5_ := mload(add(v___uniq_4_, mul(1, 32)))
                  sstore(shr(1, v___uniq_5_), shr(1, v___uniq_2_))
                  let v___uniq_6_ := or(shl(1, 0), 1)
                  _ret := v___uniq_6_
                  leave
                }
                case 1 {
                  let v___uniq_7_ := mload(add(v___uniq_4_, mul(1, 32)))
                  let v___uniq_14_ := 1
                  switch lean_obj_tag(v___uniq_14_)
                  case 0 {
                    let v___uniq_8_ := v___uniq_4_
                    let v___uniq_9_ := v___uniq_14_
                    switch lean_obj_tag(v___uniq_9_)
                    case 0 {
                      let v___uniq_10_ := v___uniq_8_
                      _ret := v___uniq_10_
                      leave
                    }
                    case 1 {
                      let _t5 := mload(64)
                      mstore(64, add(_t5, mul(2, 32)))
                      mstore(_t5, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t5, mul(1, 32)), v___uniq_7_)
                      let v___uniq_12_ := _t5
                      let v___uniq_10_ := v___uniq_12_
                      _ret := v___uniq_10_
                      leave
                    }
                  }
                  case 1 {
                    let v___uniq_8_ := or(shl(1, 0), 1)
                    let v___uniq_9_ := v___uniq_14_
                    switch lean_obj_tag(v___uniq_9_)
                    case 0 {
                      let v___uniq_10_ := v___uniq_8_
                      _ret := v___uniq_10_
                      leave
                    }
                    case 1 {
                      let _t6 := mload(64)
                      mstore(64, add(_t6, mul(2, 32)))
                      mstore(_t6, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t6, mul(1, 32)), v___uniq_7_)
                      let v___uniq_12_ := _t6
                      let v___uniq_10_ := v___uniq_12_
                      _ret := v___uniq_10_
                      leave
                    }
                  }
                }
              }
            }
            case 1 {
              _ret := v___uniq_21_
              leave
            }
          }
          case 1 {
            _ret := v___uniq_19_
            leave
          }
        }
        case 1 {
          let v___uniq_29_ := mload(add(v___uniq_16_, mul(1, 32)))
          let v___uniq_36_ := 1
          switch lean_obj_tag(v___uniq_36_)
          case 0 {
            let v___uniq_30_ := v___uniq_16_
            let v___uniq_31_ := v___uniq_36_
            switch lean_obj_tag(v___uniq_31_)
            case 0 {
              let v___uniq_32_ := v___uniq_30_
              _ret := v___uniq_32_
              leave
            }
            case 1 {
              let _t7 := mload(64)
              mstore(64, add(_t7, mul(2, 32)))
              mstore(_t7, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t7, mul(1, 32)), v___uniq_29_)
              let v___uniq_34_ := _t7
              let v___uniq_32_ := v___uniq_34_
              _ret := v___uniq_32_
              leave
            }
          }
          case 1 {
            let v___uniq_30_ := or(shl(1, 0), 1)
            let v___uniq_31_ := v___uniq_36_
            switch lean_obj_tag(v___uniq_31_)
            case 0 {
              let v___uniq_32_ := v___uniq_30_
              _ret := v___uniq_32_
              leave
            }
            case 1 {
              let _t8 := mload(64)
              mstore(64, add(_t8, mul(2, 32)))
              mstore(_t8, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
              mstore(add(_t8, mul(1, 32)), v___uniq_29_)
              let v___uniq_34_ := _t8
              let v___uniq_32_ := v___uniq_34_
              _ret := v___uniq_32_
              leave
            }
          }
        }
      }
      case 1 {
        revert(shr(1, v___uniq_38_), shr(1, v___uniq_38_))
        revert(0, 0)
        let v___uniq_40_ := or(shl(1, 0), 1)
        switch lean_obj_tag(v___uniq_40_)
        case 0 {
          let _t9 := mload(64)
          mstore(64, add(_t9, mul(2, 32)))
          mstore(_t9, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
          mstore(add(_t9, mul(1, 32)), or(shl(1, caller()), 1))
          let v___uniq_16_ := _t9
          switch lean_obj_tag(v___uniq_16_)
          case 0 {
            let v___uniq_17_ := mload(add(v___uniq_16_, mul(1, 32)))
            let v___uniq_18_ := or(shl(1, 0), 1)
            mstore(shr(1, v___uniq_18_), shr(1, v___uniq_1_))
            let v___uniq_19_ := or(shl(1, 0), 1)
            switch lean_obj_tag(v___uniq_19_)
            case 0 {
              let v___uniq_20_ := or(shl(1, 32), 1)
              mstore(shr(1, v___uniq_20_), shr(1, v___uniq_17_))
              let v___uniq_21_ := or(shl(1, 0), 1)
              switch lean_obj_tag(v___uniq_21_)
              case 0 {
                let v___uniq_22_ := or(shl(1, 64), 1)
                let _t10 := mload(64)
                mstore(64, add(_t10, mul(2, 32)))
                mstore(_t10, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                mstore(add(_t10, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_22_))), 1))
                let v___uniq_23_ := _t10
                switch lean_obj_tag(v___uniq_23_)
                case 0 {
                  let v___uniq_24_ := mload(add(v___uniq_23_, mul(1, 32)))
                  mstore(shr(1, v___uniq_18_), shr(1, v___uniq_24_))
                  let v___uniq_25_ := or(shl(1, 0), 1)
                  switch lean_obj_tag(v___uniq_25_)
                  case 0 {
                    let v___uniq_26_ := or(shl(1, 2), 1)
                    mstore(shr(1, v___uniq_20_), shr(1, v___uniq_26_))
                    let v___uniq_27_ := or(shl(1, 0), 1)
                    switch lean_obj_tag(v___uniq_27_)
                    case 0 {
                      let _t11 := mload(64)
                      mstore(64, add(_t11, mul(2, 32)))
                      mstore(_t11, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                      mstore(add(_t11, mul(1, 32)), or(shl(1, keccak256(shr(1, v___uniq_18_), shr(1, v___uniq_22_))), 1))
                      let v___uniq_28_ := _t11
                      let v___uniq_4_ := v___uniq_28_
                      switch lean_obj_tag(v___uniq_4_)
                      case 0 {
                        let v___uniq_5_ := mload(add(v___uniq_4_, mul(1, 32)))
                        sstore(shr(1, v___uniq_5_), shr(1, v___uniq_2_))
                        let v___uniq_6_ := or(shl(1, 0), 1)
                        _ret := v___uniq_6_
                        leave
                      }
                      case 1 {
                        let v___uniq_7_ := mload(add(v___uniq_4_, mul(1, 32)))
                        let v___uniq_14_ := 1
                        switch lean_obj_tag(v___uniq_14_)
                        case 0 {
                          let v___uniq_8_ := v___uniq_4_
                          let v___uniq_9_ := v___uniq_14_
                          switch lean_obj_tag(v___uniq_9_)
                          case 0 {
                            let v___uniq_10_ := v___uniq_8_
                            _ret := v___uniq_10_
                            leave
                          }
                          case 1 {
                            let _t12 := mload(64)
                            mstore(64, add(_t12, mul(2, 32)))
                            mstore(_t12, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t12, mul(1, 32)), v___uniq_7_)
                            let v___uniq_12_ := _t12
                            let v___uniq_10_ := v___uniq_12_
                            _ret := v___uniq_10_
                            leave
                          }
                        }
                        case 1 {
                          let v___uniq_8_ := or(shl(1, 0), 1)
                          let v___uniq_9_ := v___uniq_14_
                          switch lean_obj_tag(v___uniq_9_)
                          case 0 {
                            let v___uniq_10_ := v___uniq_8_
                            _ret := v___uniq_10_
                            leave
                          }
                          case 1 {
                            let _t13 := mload(64)
                            mstore(64, add(_t13, mul(2, 32)))
                            mstore(_t13, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                            mstore(add(_t13, mul(1, 32)), v___uniq_7_)
                            let v___uniq_12_ := _t13
                            let v___uniq_10_ := v___uniq_12_
                            _ret := v___uniq_10_
                            leave
                          }
                        }
                      }
                    }
                    case 1 {
                      _ret := v___uniq_27_
                      leave
                    }
                  }
                  case 1 {
                    _ret := v___uniq_25_
                    leave
                  }
                }
                case 1 {
                  let v___uniq_4_ := v___uniq_23_
                  switch lean_obj_tag(v___uniq_4_)
                  case 0 {
                    let v___uniq_5_ := mload(add(v___uniq_4_, mul(1, 32)))
                    sstore(shr(1, v___uniq_5_), shr(1, v___uniq_2_))
                    let v___uniq_6_ := or(shl(1, 0), 1)
                    _ret := v___uniq_6_
                    leave
                  }
                  case 1 {
                    let v___uniq_7_ := mload(add(v___uniq_4_, mul(1, 32)))
                    let v___uniq_14_ := 1
                    switch lean_obj_tag(v___uniq_14_)
                    case 0 {
                      let v___uniq_8_ := v___uniq_4_
                      let v___uniq_9_ := v___uniq_14_
                      switch lean_obj_tag(v___uniq_9_)
                      case 0 {
                        let v___uniq_10_ := v___uniq_8_
                        _ret := v___uniq_10_
                        leave
                      }
                      case 1 {
                        let _t14 := mload(64)
                        mstore(64, add(_t14, mul(2, 32)))
                        mstore(_t14, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t14, mul(1, 32)), v___uniq_7_)
                        let v___uniq_12_ := _t14
                        let v___uniq_10_ := v___uniq_12_
                        _ret := v___uniq_10_
                        leave
                      }
                    }
                    case 1 {
                      let v___uniq_8_ := or(shl(1, 0), 1)
                      let v___uniq_9_ := v___uniq_14_
                      switch lean_obj_tag(v___uniq_9_)
                      case 0 {
                        let v___uniq_10_ := v___uniq_8_
                        _ret := v___uniq_10_
                        leave
                      }
                      case 1 {
                        let _t15 := mload(64)
                        mstore(64, add(_t15, mul(2, 32)))
                        mstore(_t15, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                        mstore(add(_t15, mul(1, 32)), v___uniq_7_)
                        let v___uniq_12_ := _t15
                        let v___uniq_10_ := v___uniq_12_
                        _ret := v___uniq_10_
                        leave
                      }
                    }
                  }
                }
              }
              case 1 {
                _ret := v___uniq_21_
                leave
              }
            }
            case 1 {
              _ret := v___uniq_19_
              leave
            }
          }
          case 1 {
            let v___uniq_29_ := mload(add(v___uniq_16_, mul(1, 32)))
            let v___uniq_36_ := 1
            switch lean_obj_tag(v___uniq_36_)
            case 0 {
              let v___uniq_30_ := v___uniq_16_
              let v___uniq_31_ := v___uniq_36_
              switch lean_obj_tag(v___uniq_31_)
              case 0 {
                let v___uniq_32_ := v___uniq_30_
                _ret := v___uniq_32_
                leave
              }
              case 1 {
                let _t16 := mload(64)
                mstore(64, add(_t16, mul(2, 32)))
                mstore(_t16, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                mstore(add(_t16, mul(1, 32)), v___uniq_29_)
                let v___uniq_34_ := _t16
                let v___uniq_32_ := v___uniq_34_
                _ret := v___uniq_32_
                leave
              }
            }
            case 1 {
              let v___uniq_30_ := or(shl(1, 0), 1)
              let v___uniq_31_ := v___uniq_36_
              switch lean_obj_tag(v___uniq_31_)
              case 0 {
                let v___uniq_32_ := v___uniq_30_
                _ret := v___uniq_32_
                leave
              }
              case 1 {
                let _t17 := mload(64)
                mstore(64, add(_t17, mul(2, 32)))
                mstore(_t17, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
                mstore(add(_t17, mul(1, 32)), v___uniq_29_)
                let v___uniq_34_ := _t17
                let v___uniq_32_ := v___uniq_34_
                _ret := v___uniq_32_
                leave
              }
            }
          }
        }
        case 1 {
          _ret := v___uniq_40_
          leave
        }
      }
      leave
    }
    function f_ERC20_approve___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let v___uniq_4_ := f_ERC20_approve(v___uniq_1_, v___uniq_2_)
      _ret := v___uniq_4_
      leave
      leave
    }
    function f_ERC20_transferFrom(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let _t0 := mload(64)
      mstore(64, add(_t0, mul(2, 32)))
      mstore(_t0, or(or(or(0, shl(8, 1)), shl(16, 0)), shl(32, 1)))
      mstore(add(_t0, mul(1, 32)), or(shl(1, caller()), 1))
      let v___uniq_5_ := _t0
      switch lean_obj_tag(v___uniq_5_)
      case 0 {
        let v___uniq_6_ := mload(add(v___uniq_5_, mul(1, 32)))
        let v___uniq_7_ := f_ERC20_doSpendAllowance(v___uniq_1_, v___uniq_6_, v___uniq_3_)
        switch lean_obj_tag(v___uniq_7_)
        case 0 {
          let v___uniq_8_ := f_ERC20_doTransfer(v___uniq_1_, v___uniq_2_, v___uniq_3_)
          _ret := v___uniq_8_
          leave
        }
        case 1 {
          _ret := v___uniq_7_
          leave
        }
      }
      case 1 {
        let v___uniq_9_ := mload(add(v___uniq_5_, mul(1, 32)))
        let v___uniq_16_ := 1
        switch lean_obj_tag(v___uniq_16_)
        case 0 {
          let v___uniq_10_ := v___uniq_5_
          let v___uniq_11_ := v___uniq_16_
          switch lean_obj_tag(v___uniq_11_)
          case 0 {
            let v___uniq_12_ := v___uniq_10_
            _ret := v___uniq_12_
            leave
          }
          case 1 {
            let _t1 := mload(64)
            mstore(64, add(_t1, mul(2, 32)))
            mstore(_t1, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t1, mul(1, 32)), v___uniq_9_)
            let v___uniq_14_ := _t1
            let v___uniq_12_ := v___uniq_14_
            _ret := v___uniq_12_
            leave
          }
        }
        case 1 {
          let v___uniq_10_ := or(shl(1, 0), 1)
          let v___uniq_11_ := v___uniq_16_
          switch lean_obj_tag(v___uniq_11_)
          case 0 {
            let v___uniq_12_ := v___uniq_10_
            _ret := v___uniq_12_
            leave
          }
          case 1 {
            let _t2 := mload(64)
            mstore(64, add(_t2, mul(2, 32)))
            mstore(_t2, or(or(or(1, shl(8, 1)), shl(16, 0)), shl(32, 1)))
            mstore(add(_t2, mul(1, 32)), v___uniq_9_)
            let v___uniq_14_ := _t2
            let v___uniq_12_ := v___uniq_14_
            _ret := v___uniq_12_
            leave
          }
        }
      }
      leave
    }
    function f_ERC20_transferFrom___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_, v___uniq_4_) -> _ret {
      let v___uniq_5_ := f_ERC20_transferFrom(v___uniq_1_, v___uniq_2_, v___uniq_3_)
      _ret := v___uniq_5_
      leave
      leave
    }
    function f_ERC20_mint(v___uniq_1_, v___uniq_2_) -> _ret {
      let v___uniq_7_ := or(shl(1, 0), 1)
      let v___uniq_8_ := f_Nat_decEq(v___uniq_1_, v___uniq_7_)
      switch lean_obj_tag(v___uniq_8_)
      case 0 {
        let v___uniq_4_ := or(shl(1, 0), 1)
        let v___uniq_5_ := f_ERC20_doUpdate(v___uniq_4_, v___uniq_1_, v___uniq_2_)
        _ret := v___uniq_5_
        leave
      }
      case 1 {
        revert(shr(1, v___uniq_7_), shr(1, v___uniq_7_))
        revert(0, 0)
        let v___uniq_9_ := or(shl(1, 0), 1)
        switch lean_obj_tag(v___uniq_9_)
        case 0 {
          let v___uniq_4_ := or(shl(1, 0), 1)
          let v___uniq_5_ := f_ERC20_doUpdate(v___uniq_4_, v___uniq_1_, v___uniq_2_)
          _ret := v___uniq_5_
          leave
        }
        case 1 {
          _ret := v___uniq_9_
          leave
        }
      }
      leave
    }
    function f_ERC20_mint___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let v___uniq_4_ := f_ERC20_mint(v___uniq_1_, v___uniq_2_)
      _ret := v___uniq_4_
      leave
      leave
    }
    function f_ERC20_burn(v___uniq_1_, v___uniq_2_) -> _ret {
      let v___uniq_7_ := or(shl(1, 0), 1)
      let v___uniq_8_ := f_Nat_decEq(v___uniq_1_, v___uniq_7_)
      switch lean_obj_tag(v___uniq_8_)
      case 0 {
        let v___uniq_4_ := or(shl(1, 0), 1)
        let v___uniq_5_ := f_ERC20_doUpdate(v___uniq_1_, v___uniq_4_, v___uniq_2_)
        _ret := v___uniq_5_
        leave
      }
      case 1 {
        revert(shr(1, v___uniq_7_), shr(1, v___uniq_7_))
        revert(0, 0)
        let v___uniq_9_ := or(shl(1, 0), 1)
        switch lean_obj_tag(v___uniq_9_)
        case 0 {
          let v___uniq_4_ := or(shl(1, 0), 1)
          let v___uniq_5_ := f_ERC20_doUpdate(v___uniq_1_, v___uniq_4_, v___uniq_2_)
          _ret := v___uniq_5_
          leave
        }
        case 1 {
          _ret := v___uniq_9_
          leave
        }
      }
      leave
    }
    function f_ERC20_burn___boxed(v___uniq_1_, v___uniq_2_, v___uniq_3_) -> _ret {
      let v___uniq_4_ := f_ERC20_burn(v___uniq_1_, v___uniq_2_)
      _ret := v___uniq_4_
      leave
      leave
    }
  }
}

