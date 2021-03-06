//                                   _           _    __ _ _      
//                                  | |         | |  / _(_) |     
//    __ _  ___ _ __   ___ _ __ __ _| |_ ___  __| | | |_ _| | ___ 
//   / _` |/ _ \ '_ \ / _ \ '__/ _` | __/ _ \/ _` | |  _| | |/ _ \`
//  | (_| |  __/ | | |  __/ | | (_| | ||  __/ (_| | | | | | |  __/
//   \__, |\___|_| |_|\___|_|  \__,_|\__\___|\__,_| |_| |_|_|\___|
//    __/ |                                                       
//   |___/                                                        
//
//
// Warning: this is a generated file, any changes made here will be
//          overwritten by the build process.  If you need to change what is
//          generated here, you should either modify the input json files
//          (network_api.json, wallet_api.json, etc) or modify the code
//          generator (ubcore_api_generator.cpp) itself
//
#pragma once

#include <fc/rpc/json_connection.hpp>
#include <api/CommonApi.hpp>

namespace cdcchain {
    namespace rpc_stubs {

        class CommonApiRpcClient : public cdcchain::api::CommonApi
        {
        public:
            virtual fc::rpc::json_connection_ptr get_json_connection() const = 0;

            fc::variant_object blockchain_get_info() const override;
            void blockchain_generate_snapshot(const std::string& filename) const override;
            std::vector<cdcchain::consensus::CdcTrxidBalance> blockchain_get_cdc_account_balance_entry(uint32_t block_num) override;
            void blockchain_generate_issuance_map(const std::string& symbol, const std::string& filename) const override;
            cdcchain::consensus::Asset blockchain_calculate_supply(const std::string& asset) const override;
            bool blockchain_is_synced() const override;
            uint32_t blockchain_get_block_count() const override;
            cdcchain::consensus::BlockchainSecurityState blockchain_get_security_state() const override;
            std::vector<cdcchain::consensus::AccountEntry> blockchain_list_accounts(const std::string& first_account_name = fc::json::from_string("\"\"").as<std::string>(), uint32_t limit = fc::json::from_string("20").as<uint32_t>()) const override;
            std::vector<cdcchain::consensus::AccountEntry> blockchain_list_recently_updated_accounts() const override;
            std::vector<cdcchain::consensus::AccountEntry> blockchain_list_recently_registered_accounts() const override;
            std::vector<cdcchain::consensus::AssetEntry> blockchain_list_assets(const std::string& first_symbol = fc::json::from_string("\"\"").as<std::string>(), uint32_t limit = fc::json::from_string("20").as<uint32_t>()) const override;
            std::vector<std::pair<cdcchain::consensus::TransactionIdType, cdcchain::consensus::SignedTransaction>> blockchain_list_pending_transactions() const override;
            std::pair<cdcchain::consensus::TransactionIdType, cdcchain::consensus::TransactionEntry> blockchain_get_transaction(const std::string& transaction_id_prefix, bool exact = fc::json::from_string("false").as<bool>()) const override;
            cdcchain::wallet::PrettyTransaction blockchain_get_pretty_transaction(const std::string& transaction_id_prefix, bool exact = fc::json::from_string("false").as<bool>()) const override;
            cdcchain::wallet::PrettyContractTransaction blockchain_get_pretty_contract_transaction(const std::string& transaction_id_prefix, bool exact = fc::json::from_string("false").as<bool>()) const override;
            fc::optional<cdcchain::consensus::BlockEntry> blockchain_get_block(const std::string& block) const override;
            std::map<cdcchain::consensus::TransactionIdType, cdcchain::consensus::TransactionEntry> blockchain_get_block_transactions(const std::string& block) const override;
            fc::optional<cdcchain::consensus::AccountEntry> blockchain_get_account(const std::string& account) const override;
            std::map<cdcchain::consensus::AccountIdType, std::string> blockchain_get_slate(const std::string& slate) const override;
            cdcchain::consensus::BalanceEntry blockchain_get_balance(const cdcchain::consensus::Address& balance_id) const override;
            std::unordered_map<cdcchain::consensus::BalanceIdType, cdcchain::consensus::BalanceEntry> blockchain_list_balances(const std::string& first_balance_id = fc::json::from_string("\"\"").as<std::string>(), uint32_t limit = fc::json::from_string("20").as<uint32_t>()) const override;
            std::unordered_map<cdcchain::consensus::BalanceIdType, cdcchain::consensus::BalanceEntry> blockchain_list_address_balances(const std::string& addr, const fc::time_point& chanced_since = fc::json::from_string("\"1970-1-1T00:00:01\"").as<fc::time_point>()) const override;
            fc::variant_object blockchain_list_address_transactions(const std::string& addr, uint32_t filter_before = fc::json::from_string("\"0\"").as<uint32_t>()) const override;
            cdcchain::wallet::AccountBalanceSummaryType blockchain_get_account_public_balance(const std::string& account_name) const override;
            std::unordered_map<cdcchain::consensus::BalanceIdType, cdcchain::consensus::BalanceEntry> blockchain_list_key_balances(const cdcchain::consensus::PublicKeyType& key) const override;
            fc::optional<cdcchain::consensus::AssetEntry> blockchain_get_asset(const std::string& asset) const override;
            std::vector<cdcchain::consensus::AccountEntry> blockchain_list_active_delegates(uint32_t first = fc::json::from_string("0").as<uint32_t>(), uint32_t count = fc::json::from_string("20").as<uint32_t>()) const override;
            std::vector<cdcchain::consensus::AccountEntry> blockchain_list_delegates(uint32_t first = fc::json::from_string("0").as<uint32_t>(), uint32_t count = fc::json::from_string("20").as<uint32_t>()) const override;
            std::vector<cdcchain::consensus::BlockEntry> blockchain_list_blocks(uint32_t max_block_num = fc::json::from_string("-1").as<uint32_t>(), uint32_t limit = fc::json::from_string("20").as<uint32_t>()) override;
            std::vector<std::string> blockchain_list_missing_block_delegates(uint32_t block_number) override;
            std::string blockchain_export_fork_graph(uint32_t start_block = fc::json::from_string("1").as<uint32_t>(), uint32_t end_block = fc::json::from_string("-1").as<uint32_t>(), const cdcchain::consensus::FilePath& filename = fc::json::from_string("\"\"").as<cdcchain::consensus::FilePath>()) const override;
            std::map<uint32_t, std::vector<cdcchain::consensus::ForkEntry>> blockchain_list_forks() const override;
            std::vector<cdcchain::consensus::SlotEntry> blockchain_get_delegate_slot_entrys(const std::string& delegate_name, uint32_t limit = fc::json::from_string("\"10\"").as<uint32_t>()) const override;
            std::string blockchain_get_block_signee(const std::string& block) const override;
            cdcchain::consensus::Asset blockchain_unclaimed_genesis() const override;
            bool blockchain_verify_signature(const std::string& signer, const fc::sha256& hash, const fc::ecc::compact_signature& signature) const override;
            void blockchain_dump_state(const std::string& path) const override;
            void blockchain_broadcast_transaction(const cdcchain::consensus::SignedTransaction& trx) override;
            void blockchain_btc_address_convert(const std::string& path) const override;
            std::string blockchain_get_transaction_rpc(const std::string& transaction_id_prefix, bool exact = fc::json::from_string("false").as<bool>()) const override;
            void blockchain_set_node_vm_enabled(bool enabled) override;
            bool blockchain_get_node_vm_enabled() const override;
            vector<string> blockchain_get_all_contracts() const override;
            unordered_map<string, string> blockchain_get_forever_contracts() const override;
            std::vector<std::string> blockchain_list_pub_all_address(const std::string& pub_key) const override;
            std::vector<cdcchain::wallet::ContractTransactionSummary> blockchain_list_contract_transaction_history(uint32_t from_block_num, uint32_t block_count, const std::string& contract_id = fc::json::from_string("\"\"").as<std::string>(), uint32_t trx_type = fc::json::from_string("\"99\"").as<uint32_t>(), const std::string& call_method = fc::json::from_string("\"\"").as<std::string>()) const override;
            void network_add_node(const std::string& node, const std::string& command = fc::json::from_string("\"add\"").as<std::string>()) override;
            uint32_t network_get_connection_count() const override;
            std::vector<fc::variant_object> network_get_peer_info(bool not_firewalled = fc::json::from_string("false").as<bool>()) const override;
            cdcchain::consensus::TransactionIdType network_broadcast_transaction(const cdcchain::consensus::SignedTransaction& transaction_to_broadcast) override;
            void network_set_advanced_node_parameters(const fc::variant_object& params) override;
            fc::variant_object network_get_advanced_node_parameters() const override;
            cdcchain::network::MessagePropagationData network_get_transaction_propagation_data(const cdcchain::consensus::TransactionIdType& transaction_id) override;
            cdcchain::network::MessagePropagationData network_get_block_propagation_data(const cdcchain::consensus::BlockIdType& block_hash) override;
            fc::variant_object network_get_info() const override;
            std::vector<cdcchain::network::PotentialPeerEntry> network_list_potential_peers() const override;
            fc::variant_object network_get_upnp_info() const override;
            std::vector<std::string> network_get_blocked_ips() const override;
            std::string debug_get_client_name() const override;
            fc::variant delegate_get_config() const override;
            void delegate_set_network_min_connection_count(uint32_t count) override;
            void delegate_set_block_max_transaction_count(uint32_t count) override;
            void delegate_set_soft_max_imessage_length(int64_t soft_length) override;
            void delegate_set_imessage_fee_coe(const std::string& fee_coe) override;
            void delegate_set_block_max_size(uint32_t size) override;
            void delegate_set_transaction_max_size(uint32_t size) override;
            void delegate_set_transaction_canonical_signatures_required(bool required) override;
            void delegate_set_transaction_min_fee(const std::string& fee) override;
            void delegate_blacklist_add_transaction(const cdcchain::consensus::TransactionIdType& id) override;
            void delegate_blacklist_remove_transaction(const cdcchain::consensus::TransactionIdType& id) override;
            void delegate_blacklist_add_operation(const cdcchain::consensus::OperationTypeEnum& id) override;
            void delegate_blacklist_remove_operation(const cdcchain::consensus::OperationTypeEnum& id) override;
            cdcchain::consensus::ContractCreatorEntry wallet_get_account_contract_fee(const std::string& creater) override;
            cdcchain::wallet::WalletTransactionEntry wallet_get_contract_fee(const std::string& address_name, const std::string& amount) override;
            fc::variant_object wallet_get_info() override;
            void wallet_open(const std::string& wallet_name) override;
            void wallet_create(const std::string& wallet_name, const std::string& new_passphrase, const std::string& brain_key = fc::json::from_string("\"\"").as<std::string>()) override;
            fc::optional<std::string> wallet_get_name() const override;
            std::string wallet_import_private_key(const std::string& wif_key, const std::string& account_name = fc::json::from_string("null").as<std::string>(), bool create_new_account = fc::json::from_string("false").as<bool>(), bool rescan = fc::json::from_string("false").as<bool>()) override;
            void wallet_close() override;
            void wallet_backup_create(const fc::path& json_filename) const override;
            void wallet_backup_restore(const fc::path& json_filename, const std::string& wallet_name, const std::string& imported_wallet_passphrase) override;
            bool wallet_set_automatic_backups(bool enabled) override;
            uint32_t wallet_set_transaction_expiration_time(uint32_t seconds) override;
            std::vector<cdcchain::wallet::PrettyTransaction> wallet_account_transaction_history(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>(), const std::string& asset_symbol = fc::json::from_string("\"\"").as<std::string>(), int32_t limit = fc::json::from_string("0").as<int32_t>(), uint32_t start_block_num = fc::json::from_string("0").as<uint32_t>(), uint32_t end_block_num = fc::json::from_string("-1").as<uint32_t>()) const override;
            std::vector<cdcchain::wallet::PrettyTransaction> wallet_transaction_history_splite(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>(), const std::string& asset_symbol = fc::json::from_string("\"\"").as<std::string>(), int32_t limit = fc::json::from_string("0").as<int32_t>(), int32_t transaction_type = fc::json::from_string("\"2\"").as<int32_t>()) const override;
            cdcchain::wallet::AccountBalanceSummaryType wallet_account_historic_balance(const fc::time_point& time, const std::string& account_name = fc::json::from_string("\"\"").as<std::string>()) const override;
            void wallet_remove_transaction(const std::string& transaction_id) override;
            std::map<cdcchain::consensus::TransactionIdType, fc::exception> wallet_get_pending_transaction_errors(const cdcchain::consensus::FilePath& filename = fc::json::from_string("\"\"").as<cdcchain::consensus::FilePath>()) const override;
            void wallet_lock() override;
            void wallet_unlock(uint32_t timeout, const std::string& passphrase) override;
            void wallet_change_passphrase(const std::string& old_passphrase, const std::string& passphrase) override;
            bool wallet_check_passphrase(const std::string& passphrase) override;
            bool wallet_check_address(const std::string& address) override;
            std::vector<std::string> wallet_list() const override;
            cdcchain::consensus::Address wallet_account_create(const std::string& account_name, const fc::variant& private_data = fc::json::from_string("null").as<fc::variant>()) override;
            int8_t wallet_account_set_approval(const std::string& account_name, int8_t approval = fc::json::from_string("1").as<int8_t>()) override;
            std::vector<cdcchain::consensus::AccountEntry> wallet_get_all_approved_accounts(int8_t approval = fc::json::from_string("1").as<int8_t>()) override;
            std::string wallet_address_create(const std::string& account_name, const std::string& label = fc::json::from_string("\"\"").as<std::string>(), int32_t legacy_network_byte = fc::json::from_string("-1").as<int32_t>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_transfer_to_address(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_address, const cdcchain::consensus::Imessage& memo_message = fc::json::from_string("\"\"").as<cdcchain::consensus::Imessage>(), const cdcchain::wallet::VoteStrategy& strategy = fc::json::from_string("\"vote_recommended\"").as<cdcchain::wallet::VoteStrategy>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_transfer_to_public_account(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_account_name, const cdcchain::consensus::Imessage& memo_message = fc::json::from_string("\"\"").as<cdcchain::consensus::Imessage>(), const cdcchain::wallet::VoteStrategy& strategy = fc::json::from_string("\"vote_recommended\"").as<cdcchain::wallet::VoteStrategy>()) override;
            cdcchain::wallet::TransactionBuilder wallet_withdraw_from_address(const std::string& amount, const std::string& symbol, const cdcchain::consensus::Address& from_address, const std::string& to, const cdcchain::wallet::VoteStrategy& strategy = fc::json::from_string("\"vote_none\"").as<cdcchain::wallet::VoteStrategy>(), bool sign_and_broadcast = fc::json::from_string("true").as<bool>(), const std::string& builder_path = fc::json::from_string("\"\"").as<std::string>()) override;
            void wallet_rescan_blockchain(uint32_t start_block_num = fc::json::from_string("0").as<uint32_t>(), uint32_t limit = fc::json::from_string("-1").as<uint32_t>()) override;
            void wallet_cancel_scan() override;
            cdcchain::wallet::WalletTransactionEntry wallet_get_transaction(const std::string& transaction_id) override;
            cdcchain::wallet::WalletTransactionEntry wallet_scan_transaction(const std::string& transaction_id, bool overwrite_existing = fc::json::from_string("false").as<bool>()) override;
            void wallet_rebroadcast_transaction(const std::string& transaction_id) override;
            cdcchain::wallet::WalletTransactionEntry wallet_account_register(const std::string& account_name, const std::string& pay_from_account, const fc::variant& public_data = fc::json::from_string("null").as<fc::variant>(), uint8_t delegate_pay_rate = fc::json::from_string("-1").as<uint8_t>(), const std::string& account_type = fc::json::from_string("\"titan_account\"").as<std::string>()) override;
            void wallet_account_update_private_data(const std::string& account_name, const fc::variant& private_data = fc::json::from_string("null").as<fc::variant>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_account_update_registration(const std::string& account_name, const std::string& pay_from_account, const fc::variant& public_data = fc::json::from_string("null").as<fc::variant>(), uint8_t delegate_pay_rate = fc::json::from_string("-1").as<uint8_t>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_account_update_active_key(const std::string& account_to_update, const std::string& pay_from_account, const std::string& new_active_key = fc::json::from_string("\"\"").as<std::string>()) override;
            std::vector<cdcchain::wallet::WalletAccountEntry> wallet_list_accounts() const override;
            std::vector<cdcchain::wallet::WalletAccountEntry> wallet_list_unregistered_accounts() const override;
            std::vector<cdcchain::wallet::WalletAccountEntry> wallet_list_my_accounts() const override;
            std::vector<cdcchain::wallet::AccountAddressData> wallet_list_my_addresses() const override;
            cdcchain::wallet::WalletAccountEntry wallet_get_account(const std::string& account_name) const override;
            std::string wallet_get_account_public_address(const std::string& account_name) const override;
            void wallet_remove_contact_account(const std::string& account_name) override;
            void wallet_account_rename(const std::string& current_account_name, const std::string& new_account_name) override;
            cdcchain::wallet::WalletTransactionEntry wallet_asset_create(const std::string& symbol, const std::string& asset_name, const std::string& issuer_name, const std::string& description, const std::string& maximum_share_supply, uint64_t precision, const fc::variant& public_data = fc::json::from_string("null").as<fc::variant>(), bool is_market_issued = fc::json::from_string("false").as<bool>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_asset_issue(const std::string& amount, const std::string& symbol, const std::string& to_account_name, const cdcchain::consensus::Imessage& memo_message = fc::json::from_string("\"\"").as<cdcchain::consensus::Imessage>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_asset_issue_to_addresses(const std::string& symbol, const std::map<std::string, cdcchain::consensus::ShareType>& addresses) override;
            cdcchain::wallet::AccountBalanceSummaryType wallet_account_balance(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>()) const override;
            cdcchain::wallet::AccountBalanceIdSummaryType wallet_account_balance_ids(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>()) const override;
            std::vector<cdcchain::wallet::PublicKeySummary> wallet_account_list_public_keys(const std::string& account_name) override;
            cdcchain::wallet::WalletTransactionEntry wallet_delegate_withdraw_pay(const std::string& delegate_name, const std::string& to_account_name, const std::string& amount_to_withdraw) override;
            cdcchain::consensus::DelegatePaySalary wallet_delegate_pay_balance_query(const std::string& delegate_name) override;
            std::map<std::string,cdcchain::consensus::DelegatePaySalary> wallet_active_delegate_salary() override;
            bool wallet_get_delegate_statue(const std::string& account_name) override;
            void wallet_set_transaction_imessage_fee_coe(const std::string& fee_coe) override;
            double wallet_get_transaction_imessage_fee_coe() override;
            void wallet_set_transaction_imessage_soft_max_length(int64_t soft_length) override;
            int64_t wallet_get_transaction_imessage_soft_max_length() override;
            cdcchain::consensus::Asset wallet_set_transaction_fee(const std::string& fee) override;
            cdcchain::consensus::Asset wallet_get_transaction_fee(const std::string& symbol = fc::json::from_string("\"\"").as<std::string>()) override;
            fc::optional<std::string> wallet_dump_private_key(const std::string& input) const override;
            fc::optional<std::string> wallet_dump_account_private_key(const std::string& account_name, const cdcchain::wallet::AccountKeyType& key_type) const override;
            cdcchain::wallet::AccountVoteSummaryType wallet_account_vote_summary(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>()) const override;
            cdcchain::wallet::VoteSummary wallet_check_vote_status(const std::string& account) override;
            void wallet_set_setting(const std::string& name, const fc::variant& value) override;
            fc::optional<fc::variant> wallet_get_setting(const std::string& name) override;
            void wallet_delegate_set_block_production(const std::string& delegate_name, bool enabled) override;
            bool wallet_set_transaction_scanning(bool enabled) override;
            fc::ecc::compact_signature wallet_sign_hash(const std::string& signer, const fc::sha256& hash) override;
            std::string wallet_login_start(const std::string& server_account) override;
            fc::variant wallet_login_finish(const cdcchain::consensus::PublicKeyType& server_key, const cdcchain::consensus::PublicKeyType& client_key, const fc::ecc::compact_signature& client_signature) override;
            cdcchain::wallet::TransactionBuilder wallet_balance_set_vote_info(const cdcchain::consensus::Address& balance_id, const std::string& voter_address = fc::json::from_string("\"\"").as<std::string>(), const cdcchain::wallet::VoteStrategy& strategy = fc::json::from_string("\"vote_all\"").as<cdcchain::wallet::VoteStrategy>(), bool sign_and_broadcast = fc::json::from_string("\"true\"").as<bool>(), const std::string& builder_path = fc::json::from_string("\"\"").as<std::string>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_publish_slate(const std::string& publishing_account_name, const std::string& paying_account_name = fc::json::from_string("\"\"").as<std::string>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_publish_version(const std::string& publishing_account_name, const std::string& paying_account_name = fc::json::from_string("\"\"").as<std::string>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_collect_genesis_balances(const std::string& account_name) override;
            int32_t wallet_recover_accounts(int32_t accounts_to_recover, int32_t maximum_number_of_attempts = fc::json::from_string("1000").as<int32_t>()) override;
            fc::optional<fc::variant_object> wallet_verify_titan_deposit(const std::string& transaction_id_prefix) override;
            void wallet_repair_entrys(const std::string& collecting_account_name = fc::json::from_string("\"\"").as<std::string>()) override;
            int32_t wallet_regenerate_keys(const std::string& account_name, uint32_t max_key_number) override;
            cdcchain::wallet::WalletTransactionEntry wallet_account_retract(const std::string& account_to_retract, const std::string& pay_from_account) override;
            bool wallet_account_delete(const std::string& account_name) override;
            std::string wallet_transfer_to_address_rpc(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_address, const cdcchain::consensus::Imessage& memo_message = fc::json::from_string("\"\"").as<cdcchain::consensus::Imessage>(), const cdcchain::wallet::VoteStrategy& strategy = fc::json::from_string("\"vote_recommended\"").as<cdcchain::wallet::VoteStrategy>()) override;
            std::string wallet_account_balance_rpc(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>()) const override;
            std::string wallet_transfer_to_public_account_rpc(const std::string& amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_account_name, const cdcchain::consensus::Imessage& memo_message = fc::json::from_string("\"\"").as<cdcchain::consensus::Imessage>(), const cdcchain::wallet::VoteStrategy& strategy = fc::json::from_string("\"vote_recommended\"").as<cdcchain::wallet::VoteStrategy>()) override;
            cdcchain::consensus::PublicKeyType wallet_get_account_owner_publickey(const std::string& account_name) override;
            cdcchain::wallet::WalletTransactionEntry wallet_transfer_to_contract(double amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_contract, double amount_for_exec) override;
            std::vector<cdcchain::consensus::Asset> wallet_transfer_to_contract_testing(double amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_contract) override;
            vector<string> wallet_get_contracts(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>()) override;
            void wallet_scan_contracts() override;
            cdcchain::wallet::TransactionBuilder wallet_builder_add_signature(const cdcchain::wallet::TransactionBuilder& builder, bool broadcast = fc::json::from_string("false").as<bool>()) override;
            cdcchain::wallet::TransactionBuilder wallet_builder_file_add_signature(const cdcchain::consensus::FilePath& builder_path, bool broadcast = fc::json::from_string("false").as<bool>()) override;
            cdcchain::wallet::WalletTransactionEntry wallet_multisig_deposit(const std::string& amount, const std::string& asset_symbol, const std::string& from_account, const std::string& to_account, const cdcchain::consensus::Imessage& memo_message = fc::json::from_string("\"\"").as<cdcchain::consensus::Imessage>()) override;
            fc::variant_object wallet_import_multisig_account(const cdcchain::consensus::Address& multisig_address) override;
            cdcchain::consensus::Address wallet_import_multisig_account_by_detail(const std::string& asset_symbol, uint32_t m, const std::vector<cdcchain::consensus::Address>& addresses) override;
            cdcchain::wallet::TransactionBuilder wallet_multisig_withdraw_start(const std::string& amount, const std::string& asset_symbol, const cdcchain::consensus::Address& from, const cdcchain::consensus::Address& to_address, const cdcchain::consensus::Imessage& memo_message = fc::json::from_string("\"\"").as<cdcchain::consensus::Imessage>(), const cdcchain::consensus::FilePath& builder_path = fc::json::from_string("\"\"").as<cdcchain::consensus::FilePath>()) override;
            std::pair<std::string, cdcchain::wallet::WalletTransactionEntry> wallet_create_multisig_account(const std::string& amount, const std::string& asset_symbol, const std::string& from_account, uint32_t m, const std::vector<cdcchain::consensus::Address>& addresses, const cdcchain::consensus::Imessage& memo_message = fc::json::from_string("\"\"").as<cdcchain::consensus::Imessage>()) override;
            std::vector<cdcchain::wallet::PrettyTransaction> wallet_multisig_account_history(const std::string& account_address, const std::string& asset_symbol = fc::json::from_string("\"\"").as<std::string>(), int32_t limit = fc::json::from_string("0").as<int32_t>(), uint32_t start_block_num = fc::json::from_string("0").as<uint32_t>(), uint32_t end_block_num = fc::json::from_string("-1").as<uint32_t>()) const override;
            cdcchain::wallet::AccountBalanceSummaryType wallet_multisig_account_balance(const std::string& account_address = fc::json::from_string("\"\"").as<std::string>()) const override;
            fc::variant_object wallet_builder_get_multisig_detail(const cdcchain::wallet::TransactionBuilder& transaction_builder) const override;
            fc::variant_object wallet_builder_file_get_multisig_detail(const cdcchain::consensus::FilePath& builder_path) const override;
            fc::variant_object about() const override;
            fc::variant_object get_info() const override;
            void stop() override;
            std::string help(const std::string& command_name = fc::json::from_string("\"\"").as<std::string>()) const override;
            fc::variant_object validate_address(const std::string& address) const override;
            std::string execute_command_line(const std::string& input) const override;
            void execute_script(const fc::path& script) const override;
            fc::variants batch(const std::string& method_name, const std::vector<fc::variants>& parameters_list) const override;
            fc::variants batch_authenticated(const std::string& method_name, const std::vector<fc::variants>& parameters_list) const override;
            cdcchain::wallet::WalletTransactionEntry builder_finalize_and_sign(const cdcchain::wallet::TransactionBuilder& builder) const override;
            std::map<std::string, cdcchain::api::MethodData> meta_help() const override;
            void rpc_set_username(const std::string& username = fc::json::from_string("\"\"").as<std::string>()) override;
            void rpc_set_password(const std::string& password = fc::json::from_string("\"\"").as<std::string>()) override;
            void rpc_start_server(uint32_t port = fc::json::from_string("\"65065\"").as<uint32_t>()) override;
            void http_start_server(uint32_t port = fc::json::from_string("\"65066\"").as<uint32_t>()) override;
            void ntp_update_time() override;
            fc::variant disk_usage() const override;
            fc::path contract_compile(const fc::path& filename) const override;
            std::string contract_register(const std::string& owner, const fc::path& codefile, const std::string& asset_symbol, const fc::optional<double>& init_limit) override;
            std::vector<cdcchain::consensus::Asset> contract_register_testing(const std::string& owner, const fc::path& codefile) override;
            cdcchain::wallet::WalletTransactionEntry contract_upgrade(const std::string& contract_address, const std::string& upgrader_name, const std::string& new_contract_name, const cdcchain::consensus::Imessage& new_contract_desc, const std::string& asset_symbol, const fc::optional<double>& exec_limit) override;
            std::vector<cdcchain::consensus::Asset> contract_upgrade_testing(const std::string& contract_address, const std::string& upgrader_name, const std::string& new_contract_name, const cdcchain::consensus::Imessage& new_contract_desc) override;
            cdcchain::wallet::WalletTransactionEntry contract_destroy(const std::string& contract_address, const std::string& destroyer_name, const std::string& asset_symbol, const fc::optional<double>& exec_limit) override;
            std::vector<cdcchain::consensus::Asset> contract_destroy_testing(const std::string& contract_address, const std::string& destroyer_name) override;
            cdcchain::wallet::WalletTransactionEntry contract_call(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params, const std::string& asset_symbol, const fc::optional<double>& call_limit) override;
            cdcchain::consensus::ContractEntryPrintable contract_get_info(const std::string& contract) override;
            std::vector<cdcchain::consensus::BalanceEntry> contract_get_balance(const std::string& contract) override;
            std::vector<cdcchain::consensus::Asset> contract_call_testing(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params) override;
            std::string contract_call_offline(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params) override;
            cdcchain::consensus::ContractEntryPrintable contract_load_to_file(const std::string& contract, const fc::path& file) override;
            cdcchain::consensus::TransactionIdType get_result_trx_id(const cdcchain::consensus::TransactionIdType& request_id) override;
            cdcchain::consensus::TransactionIdType get_request_trx_id(const cdcchain::consensus::TransactionIdType& request_id) override;
            void simulator_open() const override;
            void simulator_close() const override;
            std::string simulator_contract_register(const std::string& owner, const fc::path& codefile, const std::string& asset_symbol, const fc::optional<double>& initLimit) override;
            cdcchain::wallet::WalletTransactionEntry simulator_contract_call(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params, const std::string& cost_asset, const fc::optional<double>& callLimit) override;
            cdcchain::wallet::WalletTransactionEntry simulator_contract_upgrade(const std::string& contract_address, const std::string& upgrader_name, const std::string& new_contract_name, const cdcchain::consensus::Imessage& new_contract_desc, const std::string& asset_symbol, const fc::optional<double>& exec_limit) override;
            std::vector<cdcchain::consensus::Asset> simulator_contract_upgrade_testing(const std::string& contract_address, const std::string& upgrader_name, const std::string& new_contract_name, const cdcchain::consensus::Imessage& new_contract_desc) override;
            cdcchain::wallet::WalletTransactionEntry simulator_contract_destroy(const std::string& contract_address, const std::string& destroyer_name, const std::string& asset_symbol, const fc::optional<double>& exec_limit) override;
            std::vector<cdcchain::consensus::Asset> simulator_contract_destroy_testing(const std::string& contract_address, const std::string& destroyer_name) override;
            cdcchain::consensus::ContractEntryPrintable simulator_contract_get_info(const std::string& contract) override;
            std::vector<cdcchain::consensus::BalanceEntry> simulator_contract_get_balance(const std::string& contract) override;
            cdcchain::wallet::WalletTransactionEntry simulator_transfer_to_contract(double amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_contract, double amount_for_exec) override;
            cdcchain::wallet::AccountBalanceSummaryType simulator_account_balance(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>()) override;
            fc::path simulator_contract_compile(const fc::path& filename) const override;
            cdcchain::consensus::ContractEntryPrintable simulator_contract_load_to_file(const std::string& contract, const fc::path& file) override;
            std::vector<cdcchain::consensus::Asset> simulator_contract_register_testing(const std::string& owner, const fc::path& codefile) override;
            std::vector<cdcchain::consensus::Asset> simulator_contract_call_testing(const std::string& contract, const std::string& caller_name, const std::string& function_name, const std::string& params) override;
            std::vector<cdcchain::consensus::Asset> simulator_transfer_to_contract_testing(double amount_to_transfer, const std::string& asset_symbol, const std::string& from_account_name, const std::string& to_contract) override;
            vector<cdcchain::consensus::SandboxAccountInfo> simulator_list_my_addresses(const std::string& account_name = fc::json::from_string("\"\"").as<std::string>()) override;
            std::string get_contract_registered_in_transaction(const cdcchain::consensus::TransactionIdType& trx_id) override;
            cdcchain::consensus::TransactionIdType get_transaction_id_contract_registered(const std::string& contract_id) override;
            cdcchain::consensus::CodePrintAble contract_get_info_from_gpc_file(const fc::path& file) override;
            fc::path script_compile(const fc::path& filename) const override;
            std::string script_add(const fc::path& filename, const cdcchain::consensus::Imessage& description) override;
            void script_remove(const std::string& scriptid) override;
            cdcchain::wallet::ScriptEntryPrintable script_get_info(const std::string& scriptid) override;
            std::vector<cdcchain::wallet::ScriptEntryPrintable> scripts_list() override;
            void script_disable(const std::string& scriptid) override;
            void script_enable(const std::string& scriptid) override;
            void script_import_to_db(const fc::path& dbfile) override;
            void script_export_from_db(const fc::path& dbfile) override;
            std::vector<std::string> script_get_events_bound(const std::string& script_id) override;
            std::vector<std::string> script_list_event_handler(const std::string& contract_id_str, const std::string& event_type) override;
            void script_add_event_handler(const std::string& contract_id_str, const std::string& event_type, const std::string& script_id, uint32_t index) override;
            void script_delete_event_handler(const std::string& contract_id_str, const std::string& event_type, const std::string& script_id) override;
        };

    }
} // end namespace cdcchain::rpc_stubs
