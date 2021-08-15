#ifndef DRAM_HPP_INCLUDED
#define DRAM_HPP_INCLUDED

#include "common.hpp"
#include "Interfaces.hpp"

class DRAM : public sc_core::sc_channel, public router_dram_if, public pb_dram_if, public ip_rtl_full_dram_if
{
    public:

        DRAM(sc_core::sc_module_name);

        // ---- Interfaces ---- //

    protected:

        // ---- DRAM SAHE ---- //

        // ---- Internals ---- //
        std::vector<dram_word> input;
        std::vector<data_point> output;
        std::vector<data_point> output_cosim;

        // ---- Processes ---- //

        // ---- Helper functions ---- //

        // Events

        // Hierarchical channels
        void read_router_dram(const int &address, std::vector<dram_word> &data);
        void write_pb_dram(std::vector<data_point> &data);
        void read_ip_rtl_full_dram(const int &address, std::vector<dram_word> &data);
        void write_ip_rtl_full_dram(std::vector<dram_word> &data);
};




#endif // DRAM_HPP_INCLUDED
